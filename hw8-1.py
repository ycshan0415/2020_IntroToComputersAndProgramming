fname = input("Enter the file name: ")
fhandle = open(fname)
#open the file

count = 0
total = 0

for line in fhandle:
    if line.startswith("X-DSPAM-Confidence: "):
        line = line.split(' ')[1]
        #get the number
        total += float(line)
        #convert the string into float number
        count += 1
    
print("Average spam confidence:", total/count)