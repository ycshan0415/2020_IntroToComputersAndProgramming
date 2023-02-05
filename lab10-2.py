import re
import urllib.request, urllib.parse, urllib.error
from bs4 import BeautifulSoup

site = 'https://www.goldenhorse.org.tw/awards/nw/?serach_type=award&sc=8&search_regist_year=2020&ins=49&fbclid=IwAR3VoyU7pgg7Mlg7oP219dOXmM3R3p23FyTNxpx7TLaK1hzKu9iXPjIjil0'
html = urllib.request.urlopen(site).read()
soup = BeautifulSoup(html, 'html.parser')
awards = soup.find_all('table', {'class': 'table special award'})

songs = awards[20]
songs = str(songs)

movies = re.findall('\(.*?\)', songs)
composers = re.findall('<u>曲<\/u> :\s+(.*?)\s+<u>唱', songs)
lyricists = re.findall('<u>詞<\/u> :\s+(.*?)\s+<u>曲', songs)
singers = re.findall('唱</u> :\s+(.*?)<br/>', songs)

for i in range(5):
    print(movies[i])
    print('詞:', composers[i])
    print('曲:', lyricists[i])
    print('唱:', singers[i], '\n')

