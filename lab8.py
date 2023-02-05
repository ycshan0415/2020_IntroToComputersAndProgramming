# Lab-10
# Exercise 1
# 'X-DSPAM-Confidence:0.8475'

test_string = 'X-DSPAM-Confidence:0.8475'
position = test_string.find(':')
line = test_string[position + 1 :]
#find the colon character, and get the number
print(float(line))
#convert the string into float number

# Exercise 2-1
test_data = [
    "1. The lyrics are bad!",
    "2. The lyrics are not bad!",
    "3. The lyrics are not that bad!",
    "4. The lyrics are poor!",
    "5. The lyrics are not poor!",
    "6. The lyrics are not that poor!",
    "7. The lyrics are good!",
    "8. The lyrics are not good!",
    "9. The lyrics are not that good!",
    "10.I'm not sure if he's good."
]

# Exercise 2-2
test_data_2 = [
    "1. I'm not sure he's good.",
    "2. I'm not sure it's a good idea"
]

i = 0
for data in test_data:
    '''
    print('Loop: ', i)
    print('not is at index: ', data.find('not'))
    print('bad is at index: ', data.find('bad'))
    print('poor is at index: ', data.find('poor'))
    print('good is at index: ', data.find('good'))
    '''
    # Please enter your code here
    # Remember to keep an indentation (tab) before your code in the for loop
    
    if 'not' in data:
        data = data.split('not')
        #split the data into two parts
        if 'bad' in data[1] or 'poor' in data[1]:            
            line = data[0] + 'good!'
            print(line)
        #convert 'bad'('poor') into 'good'
        elif 'good' in data[1] :            
            line = data[0] + 'bad!'
            print(line)
        #convert 'good' into 'bad'
    else:
        print(data)
    #if there isn't a 'not' in data, print it directly
    
    i += 1


for data in test_data_2:
    data = data.split(' not')
    #split the data into two parts
    line = data[0] + data[1]
    #combine the two parts
    line = line.replace('good', 'bad')
    #convert 'good' into 'bad'
    print(line)
