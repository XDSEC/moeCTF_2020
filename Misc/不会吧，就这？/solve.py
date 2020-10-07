source = ''

with open('puzzle.txt', 'r') as inp:
    source = inp.read()

proc = source.replace('不会吧？ ', '1').replace('就这¿ ', '0')

proc = proc.split('\n')
print('moectf{', end='')
for i in proc:
    if len(i) == 8:
        i = ''.join(list(reversed(i)))
        print(chr(int(i,2)), end='')

print('}')