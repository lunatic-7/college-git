english = int(input("Enter your english marks: "))
hindi = int(input("Enter your hindi marks: "))
maths = int(input("Enter your maths marks: "))
science = int(input("Enter your science marks: "))
computer = int(input("Enter your computer marks: "))

if english >= 30 and hindi >= 30 and maths >= 30 and science >= 30 and computer >= 30:
    avg = (english + hindi + maths + science + computer) / 5
    print(f"Your average is: {avg}")
    
    if avg >= 80:
        print("Distinction")
    elif avg >= 60:
        print("Second")
    else:
        print("Third")
else:
    print("Fail")