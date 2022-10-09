def valid_tri(a,b,c):
    if a > 0 and b > 0 and c > 0:
        if (a + b <= c) or (a + c <= b) or (b + c <= a):
            print("Valid Triangle")
        else:
            print("Not Valid Triangle")
    else:
        print("Please enter valid input")

a = int(input("Enter side a: "))
b = int(input("Enter side b: "))
c = int(input("Enter side c: "))
valid_tri(a,b,c)