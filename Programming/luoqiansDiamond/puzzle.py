import random

for _ in range(1, 11):
    n = ''
    n += str(random.randint(1, 9))
    for i in range(random.randint(0, 17)):
        n+=str(random.randint(0, 9))
    with open(str(_)+'.in', 'w') as out:
        out.write(n+' ')
        out.write(str(random.randint(1, 500)))