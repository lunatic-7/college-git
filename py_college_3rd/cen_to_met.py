def converter(num, oper):
    if oper == 1:
        print(num / 100)
    elif oper == 2:
        print(num * 100)
    
oper = int(input("Press 1 to convert cm to m, or 2 for m to cm: "))
num = int(input("Enter your number: "))

converter(num, oper)