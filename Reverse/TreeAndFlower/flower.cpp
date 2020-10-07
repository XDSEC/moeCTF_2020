
#include <cstdio>
#include <cstdlib>
#include <windows.h>
struct tree {
	unsigned char data;
	tree *right;
	tree *left;
} * Tree;

unsigned char cmps[] = {0x17,0x63,0x77,0x3,0x52,0x2E,0x4A,0x28,0x52,0x1B,0x17,0x12,0x3A,0xA,0x6C,0x62};
unsigned char buff[1000],size = 0;
int main();
void walkA(tree *T);
void walkB(tree *T);
void add(int a,int b);
void xors(int a,int b);
void sub(int a,int b);
void* func[5]={NULL};
int init() {
	tree *n[16];
	for(int i=0;i<16;i++)
		n[i]=(tree*)malloc(sizeof(tree));
	for(int i=0;i<16;i++)
		n[i]->data='A'+i;
	n[0]->left=n[1];
	n[0]->right=n[2];
	n[1]->left=n[3];
	n[1]->right=n[4];
	n[2]->left=n[5];
	n[2]->right=n[6];
	n[3]->left=n[7];
	n[3]->right=n[8];
	n[4]->left=n[9];
	n[4]->right=NULL;
	n[5]->left=n[10];
	n[5]->right=NULL;
	n[6]->left=n[11];
	n[6]->right=n[12];
	n[7]->right=n[7]->left=NULL;
	n[8]->left=NULL;
	n[8]->right=n[13];
	n[9]->left=n[9]->right=NULL;
	n[10]->left=n[14];
	n[10]->right=n[15];
	n[11]->left=n[11]->right=n[12]->left=n[12]->right=NULL;
	n[13]->left=n[13]->right=NULL;
	n[14]->left=n[14]->right=n[15]->left=n[15]->right=NULL;
	Tree=n[0];
	return 1;
}
int inited=init();
void *list[15]={add,xors,sub,xors,sub,add,xors,sub,xors,sub,add,sub,xors,add};
int idx=0;
void xors(int a,int b)
{
	_asm
	{
		xor eax,eax
		jz label1
		_emit 0xE8
		label1:
	}
	buff[a]=buff[a]^buff[b];
}
void sub(int a,int b)
{
	_asm
	{
		xor eax,eax
		jz label2
		_emit 0xE8
		label2:
	}
	buff[a]=abs(buff[a]-buff[b]);
}
void add(int a,int b) {
	_asm {
		xor eax,eax
		jz label3
		_emit 0xE8
		label3:
	}
	buff[a]+=b;
}
void fake(int a,int b) {
	if(a==0 || b==0)
		return;
	for(int i=0;i<=b;i++) {
		buff[i]^=a;
		buff[i]=(buff[i]>>b | buff[i]<<(8-b));
		_asm {
			xor eax,eax
			jz label4
			_emit 0xE8
			label4:
		}
		buff[i]=(1<<(i%8))^buff[i];
		for(int j=1;j<15;j++) {
			_asm {
				xor eax,eax
				jz label5
				_emit 0xE8
				label5:
			}
			buff[i]^=buff[j]&0xDF;
		}
			
	}
}	
void walkA(tree *T)
{
	if(T->data!=NULL)
	{
		if(T->right!=NULL)
			walkA(T->right);
		if(T->left!=NULL)
			walkA(T->left);
		buff[idx++]^=T->data;
	}
}
void walkB(tree *T)
{

	if(T->data!=NULL)
	{
		if(T->right!=NULL)
			walkB(T->right);
		buff[idx++]^=T->data;
		if(T->left!=NULL)
			walkB(T->left);
	}
}
void doit();
void doit()
{
	_asm
	{
		push 10
		push 0
		mov eax,0x00401510 //add 1
		call eax
		add esp,8
		push 2
		push 1
		mov eax,0x00401510 //xor 2
		call eax
		add esp,8
		push 7
		push 2
		mov eax,0x00401510 //add 3
		call eax
		add esp,8
		push 7
		push 3
		mov eax,0x00401510 //sub 4
		call eax
		add esp,8
		push 5
		push 4
		mov eax,0x00401510 //xor 5
		call eax
		add esp,8
		push 1
		push 6
		mov eax,0x00401510 //sub 6
		call eax
		add esp,8
		push 3
		push 7
		mov eax,0x00401510 //add 7
		call eax
		add esp,8
		push 7
		push 8
		mov eax,0x00401510  //xor 8
		call eax
		add esp,8
		push 8
		push 9
		mov eax,0x00401510 //sub 9
		call eax
		add esp,8
		push 7
		push 10
		mov eax,0x00401510 //sub 10
		call eax
		add esp,8
		push 12
		push 11
		mov eax,0x00401510 //xor 11
		call eax
		add esp,8
		push 2
		push 12
		mov eax,0x00401510 //sub 12
		call eax
		add esp,8
		push 15
		push 14
		mov eax,0x00401510 //xor 13
		call eax
		add esp,8
		push 2
		push 15
		mov eax,0x00401510 //add 14
		call eax
		add esp,8
		nop
		nop
	}
}
int replace()
{
	void *addr=doit;
	int val=(int)addr;
	DWORD old;
	if(VirtualProtect(addr,512,PAGE_EXECUTE_READWRITE,&old)==NULL)
		exit(0);
	int count=0;
	while(*((PBYTE)val)!=0x90)
	{
		if(*((PDWORD)val)==0x00401510)
			*((PDWORD)val)=(DWORD)list[count++];
		val=val+1;
	}
	addr=main;
	val=(int)addr;
	if(VirtualProtect(addr,512,PAGE_EXECUTE_READWRITE,&old)==NULL)
		exit(0);
	while(*((PBYTE)val)!=0x90)
	{
		if(*((PDWORD)val)==(DWORD)walkB)
		{
			*((PDWORD)val)=(DWORD)walkA;
			break;
		}
		val=val+1;
	}
}

int s=replace();
int main()
{
	fake(0,0);
	printf("Give Me Your Key:\n");
	scanf_s("%s",&buff,30);
	if(strlen((char*)buff)!=16)
	{
		printf("Wrong!\n");
		exit(0);
	}
	char flag[20]="";
	memcpy(flag,buff,16);
	_asm push Tree;
	_asm mov eax,walkB;
	_asm call eax;
	doit();
	_asm nop;
    for(int i=0;i<16;i++)
		if(cmps[i]!=buff[i])
		{
			printf("Wrong!\n");
			exit(0);
		}
	printf("Right!\n");
	printf("your flag: moectf{%s}\n",flag);
	system("pause");
	return 0;
}





