import base64
flag = "XXXXXXXXXXXXXXXXXXXXXXXXXXXX"
xor = ?
print(len(xor))
print(base64.b64encode(("".join([chr(ord(i)^ord(xor)) for i in list(flag)])).encode("ASCII")))
