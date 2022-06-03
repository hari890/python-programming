s=input("enter the string:")
output=''
for x in s:
    if x.isalpha():
        output=output+x
        i=x
    else:
        output=output+chr(ord(i)+int(x))
        print(output)
