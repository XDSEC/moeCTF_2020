import os
import sys
import base64

ans = 0

filenames = os.listdir('./puzzle/')
for fold1 in filenames:
    fold2s = os.listdir('./puzzle/' + fold1+'/')
    for fold2 in fold2s:
        fold3s = os.listdir('./puzzle/'+fold1+'/'+fold2+'/')
        for fold3 in fold3s:
            fileName = './puzzle/'+fold1+'/'+fold2+'/'+fold3+'/'+fold3+'.txt'
            with open(fileName, 'r') as inp:
                raw = inp.read()
                ans += raw.count('FrankNB!')
print(ans)
print('moectf{'+base64.b64encode(str(ans).encode()).decode()+'}')

# 205232
# moectf{MjA1MjMy}