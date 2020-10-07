from pycipher import caesar

with open("./puzzle.txt", "w") as out:
    ci = caesar.Caesar()
    out.write(ci.encipher('moectf{c0nqu3r_th3_w0rld}', True).lower())