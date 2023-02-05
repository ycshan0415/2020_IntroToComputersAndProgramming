import urllib.request, urllib.parse, urllib.error
from bs4 import BeautifulSoup

site = 'https://www.goldenhorse.org.tw/awards/nw/?serach_type=award&sc=8&search_regist_year=2020&ins=49&fbclid=IwAR3VoyU7pgg7Mlg7oP219dOXmM3R3p23FyTNxpx7TLaK1hzKu9iXPjIjil0'
html = urllib.request.urlopen(site).read()
soup = BeautifulSoup(html, 'html.parser')
awards = soup.find_all('table', {'class': 'table special award'})

for award in awards:
    award = award.tr.string
    print(award)



