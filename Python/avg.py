total = 0
count = 0
inp = ('Enter a number')
while True :
    try :
        if count != 0:
            inp = ('Enter a number')
        num = float(inp)
        count = count + 1
        total = total + num
    except :
        if inp == 'done' :
            break
        print('invalid number')
avg = total/count
print('Total :',total)
print('AVG :',avg)
print('Count :',count)
