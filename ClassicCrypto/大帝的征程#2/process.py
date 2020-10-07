table = 'abcdefghijklmnopqrstuvwxyz0123456789'

flag = 'moectf{c0nquer_th3_un1v3rs3}'

puzzle = ''

pad = 0

for i in flag:
    if(table.find(i) != -1):
        puzzle += table[(table.index(i)+pad)%len(table)]
        print(i, '->', table[(table.index(i)+pad)%len(table)])
    else:
        puzzle += i
        print(i, '->', i)
    pad += 1

with open ('./puzzle.txt', 'w') as out:
    out.write(puzzle)