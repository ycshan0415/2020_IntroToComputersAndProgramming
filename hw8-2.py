fname = input("Enter the file name: ")
fhandle = open(fname)
lines = fhandle.readlines()

count = 0

for line in lines:
    if line.startswith('Subject: [sakai] svn commit: '):
        line = line.split(':')[2]
        x = line.find('-')
        line1 = line[0:x-1]
        #get the 'r-----'
        y = line.find('/')
        line2 = line[x+2:y]
        if 'in' in line2:
            line2 = line2[3:]
            #skip 'in'
        print(line1,line2)
        count += 1

print('There were %d subject lines' %count)

    