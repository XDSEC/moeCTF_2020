from base64 import *
from random import Random
from flag import flag

alg = [b16encode, b32encode, b64encode, a85encode, b85encode]

r = Random()
for i in range(r.randrange(35,40)):
    er = r.choice(alg)
    flag = r.choice(alg)(str(alg.index(er)).encode()) + b'eqqie_is_god' + er(flag)

with open('secret.txt','wb') as out:
    out.write(flag)
with open('puzzle.txt', 'wb') as out:
    out.write(flag)