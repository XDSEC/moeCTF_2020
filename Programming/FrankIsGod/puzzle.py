import sys
import os
import random
import uuid
key = 'FrankNB!'
os.makedirs('./puzzle')


for i in range(10):
    fold1 = str(uuid.uuid4())[:8]
    os.makedirs('./puzzle/'+fold1)
    for j in range(10):
        fold2 = str(uuid.uuid4())[:8]
        os.makedirs('./puzzle/'+fold1 + '/'+fold2)
        for k in range(10):
            fold3 = str(uuid.uuid4())[:8]
            os.makedirs('./puzzle/'+fold1 + '/'+fold2 + '/'+fold3)
            out = ''
            for i in range(1000):
                ch = random.randint(0, 127)
                if ord('a') <=ch<=ord('z') or ord('A') <=ch<=ord('Z') or ord('0') <= ch <=ord('9'):
                    out+=chr(ch)
                else:
                    if random.randint(0, 100) < 40:
                        out+=key
            with open('./puzzle/'+fold1 + '/'+fold2 + '/'+fold3 + '/'+fold3+'.txt', 'w') as aim:
                aim.write(out)