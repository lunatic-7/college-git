# A Simple calculator

def calc(num1, num2, oper):
    if oper == "+":
        print(num1 + num2)
    elif oper == "-":
        print(num1 - num2)
    elif oper == "*":
        print(num1 * num2)
    elif oper == "/":
        print(num1 / num2)

oper = input("Type:\n1. + for addition\n2. - for subtraction\n3. * for multiplication\n4. / for division\n")
num1 = int(input("Enter 1st number: "))
num2 = int(input("Enter 2nd number: "))

calc(num1, num2, oper)