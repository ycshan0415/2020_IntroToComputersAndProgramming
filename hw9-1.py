fhandle = open('mbox-short.txt')

counts = dict()
for line in fhandle:
    if not line.startswith('From '):
        continue
    #find lines which start with 'From'
    line = line.rstrip()
    words = line.split()
    counts[words[5][0:2]] = counts.get(words[5][0:2], 0) + 1
    #read the time

counts = sorted(counts.items())
for item in counts:
    print(item[0], item[1])
    
