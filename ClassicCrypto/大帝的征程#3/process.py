flag = 'moectf{c0nquer_th3_XDSEC}'

def rot47(data):
        decode = []
        for i in range(len(data)):
                encoded = ord(data[i])
                if encoded >= 33 and encoded <= 126:
                        decode.append(chr(33 + ((encoded + 14) % 94)))
                else:
                        decode.append(data[i])
        return ''.join(decode)
print(rot47(flag))
