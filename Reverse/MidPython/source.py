T_letter = ['', '', '', '', '']


def Create_Matrix(key):
    key = Remove_Duplicates(key)
    key = key.replace(' ', '')
    j = 0
    for i in range(len(key)):
        T_letter[j] += key[i]
        if 0 == (i+1) % 5:
            j += 1


def Remove_Duplicates(key):
    key = key.upper()
    _key = ''
    for ch in key:
        if ch == 'I':
            ch = 'J'
        if ch in _key:
            continue
        else:
            _key += ch
    return _key


def Get_MatrixIndex(ch):
    for i in range(len(T_letter)):
        for j in range(len(T_letter)):
            if ch == T_letter[i][j]:
                return i, j  # i为行，j为列


def Encrypt(plaintext, T_letter):
    ciphertext = ''

    if len(plaintext) % 2 != 0:
        plaintext += 'Z'

    i = 0
    while i < len(plaintext):
        if True == plaintext[i].isalpha():
            j = i+1
            while j < len(plaintext):
                if True == plaintext[j].isalpha():
                    if 'I' == plaintext[i].upper():
                        x = Get_MatrixIndex('J')
                    else:
                        x = Get_MatrixIndex(
                            plaintext[i].upper())
                    if 'I' == plaintext[j].upper():
                        y = Get_MatrixIndex('J')
                    else:
                        y = Get_MatrixIndex(plaintext[j].upper())

                    if x[0] == y[0]:
                        ciphertext += T_letter[x[0]][(x[1]+1) %
                                                     5]+T_letter[y[0]][(y[1]+1) % 5]
                    elif x[1] == y[1]:
                        ciphertext += T_letter[(x[1]+1) %
                                               5][x[0]]+T_letter[(y[1]+1) % 5][y[0]]
                    else:
                        ciphertext += T_letter[x[0]][y[1]]+T_letter[y[0]][x[1]]
                    break
                j += 1
            i = j+1
            continue
        else:
            ciphertext += plaintext[i]
        i += 1

    return ciphertext


def Decrypt(ciphertext, T_letter):
    plaintext = ''
    if len(ciphertext) % 2 != 0:
        ciphertext += 'Z'

    i = 0
    while i < len(ciphertext):
        if True == ciphertext[i].isalpha():
            j = i+1
            while j < len(ciphertext):
                if True == ciphertext[j].isalpha():
                    if 'I' == ciphertext[i].upper():
                        x = Get_MatrixIndex('J')
                    else:
                        x = Get_MatrixIndex(
                            ciphertext[i].upper())
                    if 'I' == ciphertext[j].upper():
                        y = Get_MatrixIndex('J')
                    else:
                        y = Get_MatrixIndex(ciphertext[j].upper())

                    if x[0] == y[0]:
                        plaintext += T_letter[x[0]][(x[1]-1) %
                                                    5]+T_letter[y[0]][(y[1]-1) % 5]
                    elif x[1] == y[1]:
                        plaintext += T_letter[(x[1]-1) %
                                              5][x[0]]+T_letter[(y[1]-1) % 5][y[0]]
                    else:
                        plaintext += T_letter[x[0]][y[1]]+T_letter[y[0]][x[1]]
                    break
                j += 1
            i = j+1
            continue
        else:
            plaintext += ciphertext[i]
        i += 1

    return plaintext


# 主函数
if __name__ == '__main__':
    key = "YWCNOPJAFGHDTULMQXZEBRVKS"
    flag_enc = "WYTFSQOYGYOQKJLHUE"

    Create_Matrix(key)

    print('Please Input flag: ')
    plaintext = input()
    if plaintext[0:7] != 'moectf{' or plaintext[-1] != '}':
        print("Ruaaaaa~Wrong!")
        input()
        exit()
    plaintext = plaintext[7:-1]
    # print(plaintext)
    flag = Encrypt(plaintext, T_letter)
    source = Decrypt(flag, T_letter)
    print(source)
    # print(flag)
    if (flag != flag_enc):
        print("Ruaaaaa~Wrong!")
        input()
        exit()
    else:
        print('Congratulations!')
        input()
        exit()
