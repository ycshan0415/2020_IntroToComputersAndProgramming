total = 0
count = 0
while (1):
    num = input('Enter a number: ')
    if(str(num) == 'done'):
        break
    try:
        num = int(num)
        total += num
        count += 1
    except:
        print('Invalid Input:', num)

averge = total/count
print('Total = ', total)
print('Count = ', count)
print('Averge = ', averge)