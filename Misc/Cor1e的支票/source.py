x = ''
with open('puzzle.txt', 'r') as inp:
    x = inp.read()
    x = x.replace('.', '。')
    x = x.replace('?', '？')
    x = x.replace('!', '！')

with open('puzzle.cor1e', 'w') as out:
    out.write(x)
print(x)