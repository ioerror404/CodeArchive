def compute_pay(hours, rate):
    try:
        overRate = 0
        overT = 0
        overPay = 0
        if hours > 40 :  #to confirm overtime gets its exact Pay
            overT = hours - 40
            overRate = rate * 1.5
            hours = 40
            overPay = overRate * overT
        grossPay = hours * rate + overPay
        print('Gross Pay : ' ,grossPay)
    except:
        print('Please enetr a numeric digit')

inp1 = input('Enter hours : ')
inp2 = input('Enter Rate per hour : ')
hours = float (inp1)
rate = float (inp2)
compute_pay(hours, rate)
