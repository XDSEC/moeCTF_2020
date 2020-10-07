import requests

s = requests.Session()

a = s.get('http://39.98.86.109:10001/')

source = a.text

import re

dic = re.findall('[0-9]+', source)

ans = int(dic[3])+int(dic[4])

print(dic, ans)

b = s.post('http://39.98.86.109:10001/', {'a': str(ans)})

print(b.text)