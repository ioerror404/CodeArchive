largest = None
smallest = None
while True:
    inp = input("Enter a number: ")
    if inp == "done" : break
    try :
        num = int(inp)
        if largest is None : largest = num
        elif num > largest : largest = num
        if smallest is None : smallest = num
        elif num < smallest : smallest = num
    except :
        print("Invalid input")

print("Maximum is", largest)
print("Minimum is", smallest)
