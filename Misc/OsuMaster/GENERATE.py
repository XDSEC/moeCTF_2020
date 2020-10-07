period = 270

payload1 = 'Sprite,Foreground,Centre,"moectf_icon_only.png",320,240\n S,0,'

start1 = 2133

payload2 = ',,0.168\n M,0,'

payload3 = ','

payload4 = ',287,255\n'


flag = '-.-- --- ..- .- .-. . --- ... ..- -- .- ... - . .-. ... --- ... --- ... - .-. --- -. --. - .... .. ... ..-. .-.. .- --. --. .. ...- . -.-- --- ..- - --- .-. . .-- .- .-. -.. -.-- --- ..- -.. --- -. --- - .- ..-. .-. .- .. -.. --- ..-. .. - ... .-.. . -. --. - .... .. - .. ... - .... . .-. .. --. .... - ..-. .-.. .- --.'

out = ''

for i in flag:
    if i == '-':
        out += payload1 + str(start1) + payload2 + str(start1) + payload3 + str(start1 + 2 * period) + payload4
        start1 += 2 * period
    elif i == '.':
        out += payload1 + str(start1) + payload2 + str(start1) + payload3 + str(start1 + period) + payload4
        start1 += period
    elif i == ' ':
        start1 += period
    start1 += period

with open('proc.txt', 'w') as o:
    o.write(out)
