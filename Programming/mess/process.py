import random
flag = 'moectf{pyth0n_1s_s0_s1mple}'

digit = ''

for i in flag:
    digit += str(ord(i))


i = 0

while i < len(digit):
    n = random.randint(0, 128)
    if ord('a') <= n <= ord('z') or ord('A') <= n <= ord('Z'):
        digit = digit[0:i] + chr(n) + digit[i:]
    i += 1

with open('./ppc/puzzle.txt', 'w') as out:
    out.write(digit)
