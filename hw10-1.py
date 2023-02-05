import re

file=open('wifi_log.txt',"r")
lines = file.readlines()
temp=0
time=0
for i in lines:
    if i.find('inputEAPOLFrame')!=-1 and i.find('(')!=-1:
        num=re.findall('\((.*?)\)',i)
        
        temp = temp + int(num[0])
        time = time + 1
        
print('average of the received non-key EAPOL frames: ',round(temp/time,3))

ip=dict()
for j in lines:
    if j.find('Local IP')!=-1 :
        temp2=re.findall('Local IP: (.*)\\\\',j)
       
        if temp2[0] not in ip :
            ip[temp2[0]]=1
        else :
            ip[temp2[0]] +=1
    if j.find('IPV4 Addr')!=-1 :
      
        temp2=re.findall('IPV4 Addr: (.*)\\\\',j)
       
        if temp2[0] not in ip :
            ip[temp2[0]]=1
        else :
            ip[temp2[0]] +=1    
    if j.find('Remote IP')!=-1 :
        
        temp2=re.findall('Remote IP: (.*)\\\\',j)
       
        if temp2[0] not in ip :
            ip[temp2[0]]=1
        else :
            ip[temp2[0]] +=1
            
print(ip)