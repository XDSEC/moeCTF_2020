import sys
import os
import random
import uuid
key = 'EqqieNB'
os.makedirs('./puzzle')


for i in range(10):
    fold1 = str(uuid.uuid4())[:8]
    os.makedirs('./puzzle/'+fold1)
    for j in range(10):
        fold2 = str(uuid.uuid4())[:8]
        os.makedirs('./puzzle/'+fold1 + '/'+fold2)
        for k in range(20):
            fold3 = str(uuid.uuid4())[:8]
            os.makedirs('./puzzle/'+fold1 + '/'+fold2 + '/'+fold3)
            out = key + ('!' if random.randint(0, 100) < 40 else '?')
            for i in range(1000):
                ch = random.randint(33, 127)
                out += chr(ch)
            with open('./puzzle/'+fold1 + '/'+fold2 + '/'+fold3 + '/'+fold3+'.txt', 'w') as aim:
                aim.write(out)
