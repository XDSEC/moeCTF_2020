import random
flag = 'moectf{xxxxxxxxxxx}'

digit = ''

for i in flag:
    digit += str(ord(i))


i = 0

while i < len(digit):
    n = random.randint(0, 128)
    if ord('a') <= n <= ord('z') or ord('A') <= n <= ord('Z'):
        digit = digit[0:i] + chr(n) + digit[i:]
    i += 1

with open('puzzle.txt', 'w') as out:
    out.write(digit)
