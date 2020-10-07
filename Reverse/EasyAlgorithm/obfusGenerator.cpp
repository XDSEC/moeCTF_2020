#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cstring>
#include<vector>
#include<string>
//#include<windows.h>
#define INT 0
#define LLONG 1
#define CHAR 2
#define SHORT 3
#define MAX_OP_TYPE 2
#define MAX_CODE_LEN 1000
#define MAX_DEOBFU_CODE_NUM 1000
//#define DEBUG_CPP_CODE
#define OUPUT_CONSOLE
using namespace std;
struct VarInfo
{
	int data_type;
	char name[30];
};
int var_num;
VarInfo list[10000];
struct Operate
{
	int op_type;
	VarInfo *var_info;
	int op_args[10];
	int recover;
};
struct Op2ObfuCode
{
	char *code;
	int arg_num;
};
struct Op2DeObfuCode
{
	char *deobfu_code[MAX_DEOBFU_CODE_NUM];
	int arg_num;
	int equal_code_num=0;
};
int Ops=0;
Operate *OpList[10000],*OpOrig[10000];
Op2ObfuCode op_table[10000];
Op2DeObfuCode deop_table[10000];
int RunTimeStack[10000]={0},st_size=0;
void push(int val)
{
	RunTimeStack[st_size++]=val;
}
int pop()
{
	return RunTimeStack[--st_size];
}
void addDeObfuCode(const char *code,int type,int arg_num)
{
	Op2DeObfuCode op2code=deop_table[type];
	op2code.deobfu_code[op2code.equal_code_num++]=(char*)code;
	op2code.arg_num=arg_num;
	deop_table[type]=op2code;
}
void addObfuCode(const char *code,int type,int arg_num)
{
	Op2ObfuCode op2code;
	op2code.code=(char*)code;
	op2code.arg_num=arg_num;
	op_table[type]=op2code;
}
void addVar(const char *name,int type)
{
	VarInfo vi;
	strcpy(vi.name,name);
	vi.data_type=type;
	list[var_num++]=vi;
}
Operate *getRecoverOp(Operate *a)
{
	Operate *op=(Operate*)malloc(sizeof(Operate));
	for(int i=0;i<=6;i++)
		op->op_args[i]=a->op_args[i];
	op->op_type=a->op_type;
	op->recover=1;
	op->var_info=a->var_info;
	return op;
}
void dumpOpList()
{
	for(int i=0;i<Ops;i++)
		printf("dump:%04X    VarName:%s    OpType:%d    RecoverFlag:%s\n\n",i,OpList[i]->var_info->name,OpList[i]->op_type,OpList[i]->recover==1?"True":"False");

}
const char sub_name[]="sub";
vector<int> cleanSub;
void genOperates(int max_size)
{
	int ptr=0;
	for(int i=0;i<max_size;i++)
	{
		Operate *op=(Operate*)malloc(sizeof(Operate));
		OpOrig[i]=op;
		op->op_type=rand()%MAX_OP_TYPE;
		int t=rand()%var_num;
		op->var_info=&list[t];
		for(int j=0;j<=6;j++)
			op->op_args[j]=rand();
		op->recover=0;
	}

	while(ptr<max_size)
	{
		int choice=rand()%2;
		if(choice || st_size==0)
		{
			OpList[Ops++]=OpOrig[ptr];
			push(ptr++);
			continue;
		}
		else if(!choice && st_size>0)
		{
			int x=pop();
			Operate *op=getRecoverOp(OpOrig[x]);
			OpList[Ops++]=op;
			if(st_size==0)
			{
				printf("[OBFU_MAKER]: Find a function %s_%d() that can put real code intoo..\n",sub_name,Ops-1);
				cleanSub.push_back(Ops-1);
			}
			continue;
		}
	}
	int t=st_size;
	for(int i=0;i<t;i++)
	{
		int x=pop();
		Operate *op=getRecoverOp(OpOrig[x]);
		OpList[Ops++]=op;
	}
#ifdef DEBUG_OP
	dumpOpList();
#endif

}
vector<string> codeList;
void genCppCode()
{
	for(int i=0;i<Ops;i++)
	{
		char *str=(char*)malloc(MAX_CODE_LEN+10);
		char *buf=(char*)malloc(MAX_CODE_LEN+10);
		memset(str,0,sizeof(str));
		memset(buf,0,sizeof(buf));
		if(!OpList[i]->recover)
		{
			Op2ObfuCode *c=&op_table[OpList[i]->op_type];
			if(c->code==NULL)
				continue;
			int ptr=0,rep=0;
			for(int j=0;j<strlen(c->code);j++)
			{
				if(c->code[j]=='%' && c->code[j+1]=='s')
				{
					int len=strlen(OpList[i]->var_info->name);
					for(int k=0;k<len;k++)
						str[ptr+k]=OpList[i]->var_info->name[k];
					ptr+=len;
					j+=1;
					continue;
				}
				str[ptr++]=c->code[j];
			}
			str[ptr]='\0';
			sprintf(buf,str,OpList[i]->op_args[0],OpList[i]->op_args[1],OpList[i]->op_args[2],OpList[i]->op_args[3],OpList[i]->op_args[4],OpList[i]->op_args[5],OpList[i]->op_args[6]);
			for(int j=0;j<strlen(buf);j++)
				str[j]=buf[j];
			str[strlen(buf)]='\0';
		#ifdef DEBUG_CPP_CODE
			printf("Encode Code:\n %s\n",str);
		#endif
		}
		else
		{
			Op2DeObfuCode *c=&deop_table[OpList[i]->op_type];
			if(c->equal_code_num==0)
				continue;
			char *code=c->deobfu_code[rand()%c->equal_code_num];
			int ptr=0,rep=0;
			for(int j=0;j<strlen(code);j++)
			{
				if(code[j]=='%' && code[j+1]=='s')
				{
					int len=strlen(OpList[i]->var_info->name);
					for(int k=0;k<len;k++)
						str[ptr+k]=OpList[i]->var_info->name[k];
					ptr+=len;
					j+=1;
					continue;
				}
				str[ptr++]=code[j];
			}
			str[ptr]='\0';
			sprintf(buf,str,OpList[i]->op_args[0],OpList[i]->op_args[1],OpList[i]->op_args[2],OpList[i]->op_args[3],OpList[i]->op_args[4],OpList[i]->op_args[5],OpList[i]->op_args[6]);
			for(int j=0;j<strlen(buf);j++)
				str[j]=buf[j];
			str[strlen(buf)]='\0';
		#ifdef DEBUG_CPP_CODE
			printf("Decode Code:\n %s\n",str);
		#endif
		}
		string s(str);
		codeList.push_back(s);
		free(buf);
		free(str);
	}
}
struct Tree
{
	int data;
	Tree* branch[20];
	int branch_num;
};
int remain_size,data,size;
Tree *head;
void buildRandomTree(Tree *node)
{
	node->branch_num=0;
	node->data=data++;
	if(remain_size<=0)
		return;
	int x=rand()%3+2;
	if(remain_size<=x)
		x=remain_size;
	remain_size-=x;
	for(int i=0;i<x;i++)
	{
		Tree *node_=(Tree*)malloc(sizeof(Tree));
		node->branch[node->branch_num++]=node_;
		buildRandomTree(node_);
	}
}
void genRandomTree(int size_)
{
	remain_size=size_;
	size=size_;
	data=0;
	Tree *head_=(Tree*)malloc(sizeof(Tree));
	head=head_;
	buildRandomTree(head_);
}

vector<string> finalCode;
void genSubCode(Tree *node,int depth)
{
	char *code=(char*)malloc(5000);
	int data=node->data;
	int x=0;

	x+=sprintf(code,"void %s_%d()\t//depth: %d\n{\n",sub_name,data,depth);
	VarInfo *vi=&list[rand()%var_num];
	x+=sprintf(code+x,"\tx=(x&%s)^(y|%s)^(x<<1);\n",vi->name,vi->name);
	x+=sprintf(code+x,"\ty=(y&%s)^(x|%s)^(y<<1);\n",vi->name,vi->name);
	x+=sprintf(code+x,"\t%s",codeList[data].c_str());
	for(int i=0;i<cleanSub.size();i++)
		if(data==cleanSub[i])
			x+=sprintf(code+x,"\n\t/* put your code here! */");
	for(int i=0;i<node->branch_num;i++)
	{
		int p=rand()%100;
		if(p<=20)
		{
			x+=sprintf(code+x,"\n\tif((x+y)^2>=0 && (x-y)^2>=0)");
			x+=sprintf(code+x,"\n\t\t%s_%d();",sub_name,node->branch[i]->data);
			x+=sprintf(code+x,"\n\telse");
			x+=sprintf(code+x,"\n\t\texit(0);");
		}
		else if(p<=40)
		{
			x+=sprintf(code+x,"\n\tif((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)");
			x+=sprintf(code+x,"\n\t\t%s_%d();",sub_name,node->branch[i]->data);
			x+=sprintf(code+x,"\n\telse");
			x+=sprintf(code+x,"\n\t\texit(0);");
		}
		else if(p<=60)
		{
			x+=sprintf(code+x,"\n\tif((x-y)==(~(~x+y)))");
			x+=sprintf(code+x,"\n\t\t%s_%d();",sub_name,node->branch[i]->data);
			x+=sprintf(code+x,"\n\telse");
			x+=sprintf(code+x,"\n\t\texit(0);");
		}
		else
			x+=sprintf(code+x,"\n\t%s_%d();",sub_name,node->branch[i]->data);
	}
	x+=sprintf(code+x,"\n}\n");
	string cx(code);
	free(code);
	finalCode.push_back(cx);
#ifdef OUPUT_CONSOLE
	printf("%s\n",cx.c_str());
#endif
}
void walkTree(Tree *node,int depth)
{
	int x=node->branch_num;
	genSubCode(node,depth);
	for(int i=0;i<x;i++)
	{
		Tree *n=node->branch[i];
		walkTree(n,depth+1);
	}
}
void spawnRubbisCode(int size)
{
	printf("[OBFU_MAKER]: This program is used to generate rubbish code in order to disgust others..\n");
	printf("[OBFU_MAKER]: Press any key to continue..\n");
	getchar();
	printf("[OBFU_MAKER]: Start to generate rubbish codes..\n");
//	Sleep(1000);
	printf("[OBFU_MAKER]: Code size: %d..\n",size);
	genOperates(size);
//	Sleep(3000);
	printf("[OBFU_MAKER]: Operation Generated..\n");
//	Sleep(1000);
	printf("[OBFU_MAKER]: Translate into cpp code..\n");
	genCppCode();
//	Sleep(2000);
	printf("[OBFU_MAKER]: Done..\n");
//	Sleep(1000);
	printf("[OBFU_MAKER]: Generate logic tree..\n");
//	Sleep(2000);
	genRandomTree(size*2-1);
	printf("[OBFU_MAKER]: Done..\n");
//	Sleep(1000);
	printf("[OBFU_MAKER]: Generate final codes..\n");
//	Sleep(3000);
	walkTree(head,1);
	printf("[OBFU_MAKER]: Done!\n");
//	Sleep(2000);
}
void writeToFile(const char *filename)
{
	FILE *fp=fopen(filename,"w");
	int x=rand()+1,y=rand()+1;
	if(x>y)
		swap(x,y);
	fprintf(fp,"unsigned int x=%d,y=%d;\n",x,y);
	for(int i=finalCode.size()-1;i>=0;i--)
		fprintf(fp,"%s",finalCode[i].c_str());
	fclose(fp);
	printf("[OBFU_MAKER]: Write to file %s..\n",filename);
}
void test()
{
	addVar("flag[0]",1);  //the type field reserved
	addVar("flag[1]",1);
	addVar("flag[2]",1);
	addVar("flag[3]",1);
	addVar("flag[4]",1);
	addVar("flag[5]",1);
	addVar("flag[6]",1);
	addVar("flag[7]",1);
	addVar("flag[8]",1);
	addVar("flag[9]",1);
	addVar("flag[10]",1);
	addVar("flag[11]",1);
	addVar("flag[12]",1);
	addVar("flag[13]",1);
	addVar("flag[14]",1);
	addVar("flag[15]",1);
	addVar("flag[16]",1);
	addVar("flag[17]",1);
	addVar("flag[18]",1);
	addVar("flag[19]",1);
	addVar("flag[20]",1);
	addVar("flag[21]",1);
	addObfuCode("%s=~(~%s+%d%12);",0,1);
	addDeObfuCode("%s=%s+%d%12;",0,1);
	addDeObfuCode("%s=~(~%s-%d%12);",0,1);
	addObfuCode("unsigned char a=%s,b=%d&0xff,c=%d&0xff;\n\t%s=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);",1,2);
	addDeObfuCode("%s=%s^(%d&0xff)^(%d&0xff);",1,2);

	//addObfuCode("unsigned char a=%s,x=%d%8;\n\t%s=(a>>x) | (a<<(8-x));",2,1);
	//addDeObfuCode("unsigned char a=%s,x=%d%8;\n\t%s=(a<<x) | (a>>(8-x));",2,1);
	spawnRubbisCode(1000);
	//some bug occured here which cause the argument size that can't be larger than 1000
	writeToFile("obfus.cpp");
}
int main()
{
	srand(time(0));
	test();
    return 0;
}
