#printing perfect numbers in a given range
def perfect(n):
	sum=0
	for i in range(1,n//2+1):
		if n%i == 0:
			sum+=i
	return (sum == n)

def perfect_range(x,y):
	for num in range(x,y):
		if perfect(num): print(num)

x=int(input("Perfect numbers\nFrom: "))
y=int(input("To: "))
perfect_range(x,y)
