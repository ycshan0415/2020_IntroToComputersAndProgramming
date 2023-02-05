import re
import requests
from bs4 import BeautifulSoup

category = {}

url = requests.get('https://www.ptt.cc/bbs/HCI/index20.html')
soup = BeautifulSoup(url.text, 'html.parser').decode()
# use beautifulsoup to get html

result1 = re.findall('<div class="title">\s+<a href=".(.+)\">(.*\[.+\].+)<\/a>', soup) # title
result2 = re.findall('<div class="title">\s+<a href=".+\[(.+)\].+<\/a>', soup) # category
# use regular expression to get title and category

for i in result2:
    category[i] = category.get(i, 0)+1
# use get to count the time an IP appear 
    
for i1, i2 in result1:
    print(i1, i2)
print()
for k, v in category.items():
    print([k], v)