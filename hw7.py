while(1):
    try:
        loan = float(input('Enter amount of loan: '))
        break
    except:
        ValueError
        print('Error! The input should be numbers.')

while(1):
    try:
        rate = float(input('Enter interest rate: '))
        break
    except:
        ValueError
        print('Error! The input should be numbers.')

while(1):
    try:
        mpay = float(input('Enter monthly payment: '))
        break
    except:
        ValueError
        print('Error! The input should be numbers.')

print('Balance remaining after first payment: $', loan * (1 + rate/100/12) - mpay)