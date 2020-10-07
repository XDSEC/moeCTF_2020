from base64 import (a85decode,
                    b16decode,
                    b32decode,
                    b64decode,
                    b85decode)
EncodeSet = {
    'Fa': b16decode, '0E': b16decode,  'MA==': b16decode,  '30': b16decode,  'GA======': b16decode,
    'F#': b32decode, '0`': b32decode,  'MQ==': b32decode,  '31': b32decode,  'GE======': b32decode,
    'G5': b64decode, '1&': b64decode,  'Mg==': b64decode,  '32': b64decode,  'GI======': b64decode,
    'GX': a85decode, '1B': a85decode,  'Mw==': a85decode,  '33': a85decode,  'GM======': a85decode,
    'Gy': b85decode, '1]': b85decode,  'NA==': b85decode,  '34': b85decode,  'GQ======': b85decode
}
n = 0
x = ''

f = open("./puzzle.txt", "r")
s = f.readline()

while n != -1:
    n = s.find('eqqie_is_god')
    if n != -1:
        x = s[:n]
        s = EncodeSet[x](s[n + 12:]).decode()
    else:
        print('Success! or Failed...')
        print(s)
