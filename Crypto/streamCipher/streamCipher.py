# ezStreamCipher
# flag = Base64("moectf{U_Kn0w_How_7o_Break_Stream_Ciphe2}")
import base64
flag = "XXXXXXXXXXXXXXXXXXXXXXXXXXXX"
xor = ?
print(len(xor))
print(base64.b64encode(("".join([chr(ord(i)^ord(xor)) for i in list(flag)])).encode("ACSII")))

'''
1
b'Og9hNAFrCjU9aQ4+C2psLzxpYRE6azw+FmphPgk2EjQBDyw+DWsKIQIPHiwAaBYoOx8wNBU2aGU='
'''
