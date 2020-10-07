import os

for i in range(1, 11):
    os.system('./solve < '+str(i)+'.in > '+str(i)+'.out')