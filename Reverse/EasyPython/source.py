# flag = 'tH1s_1s_th3-R3a1ly_3asy_Python!'

key = [115, 76, 50, 116, 90, 50, 116, 90, 115, 110, 48, 47, 87, 48, 103, 50, 106, 126, 90, 48, 103, 116, 126, 90, 85, 126, 115, 110, 105, 104, 35]

print('Input your flag: ', end='')

flag = input()

out = []

for i in flag:
    out.append((ord(i)>>4)^ord(i))

if len(out) != len(key):
    print('TRY AGAIN!')
    exit()

for i in range(len(out)):
    if out[i] != key[i]:
        print('TRY AGAIN!')
        exit()

print('you are right! the flag is : moectf{%s}'%flag)
