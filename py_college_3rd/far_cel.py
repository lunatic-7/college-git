def temp_conv(num, oper):
    if oper == 1:
        print((num - 32) * (5/9))
    elif oper == 2:
        print((num * (9/5)) + 32)

oper = int(input("Press 1 to convert farenheit to celcius, or 2 for celcius to farenheit: "))
num = int(input("Enter your temperature: "))

temp_conv(num, oper)
