n=int(input("enter no of students:"))
d={}
for i in range(n):
    name=input("enter the student name:")
    marks=input("enter student marks:")
    d[name]=marks
while True:
    name= input("enter student name to get marks:")
    marks=d.get(name,-1)
    if marks==-1:
        print('student marks are not available.')
    else:
        print('the marks',name,'are',marks)
        option=input("enter do you want to continue again:")
        if option=="No":
            print("thanks for continue with us")
            break
