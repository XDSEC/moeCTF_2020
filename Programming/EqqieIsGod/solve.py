import re
import os
import base64
ans = 0
fileNum = 0
reg = r'[a-zA-Z0-9]+'
filenames = os.listdir('./puzzle/')
for fold1 in filenames:
    fold2s = os.listdir('./puzzle/' + fold1+'/')
    for fold2 in fold2s:
        fold3s = os.listdir('./puzzle/'+fold1+'/'+fold2+'/')
        for fold3 in fold3s:
            fileName = './puzzle/'+fold1+'/'+fold2+'/'+fold3+'/'+fold3+'.txt'
            fileNum += 1
            with open(fileName, 'r') as inp:
                raw = inp.read()
                print(fileName + '\n' if raw.find('EqqieNB!') and raw[:8] != 'EqqieNB!' else '', end='')
                if raw[:8] == 'EqqieNB!':
                    a = raw[8:]
                    ans+= len(re.findall(reg, a))
print(ans)
print(fileNum)
print('moectf{'+base64.b64encode(str(ans).encode()).decode()+'}')

# 271293
# moectf{MjcxMjkz}
