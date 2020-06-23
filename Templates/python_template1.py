x=input()
len=len(x)
x=int(x)
a=input()
arr=list(map(int,a.split()))

a=int(x/10)
b=int(x%10)
# print(x,b)
c=int(10)
flag=int(0)
aa=int(0)
bb=int(0)
for i in range(1,len):
	if a%arr[0]==0 and b%arr[1]==0 and a!=0 and b!=0:
		flag=int(1)
		aa=int(a)
		bb=int(b)
	c=int(c*10)
	b=int(x%c)
	a=int(x/c)
	# print(c)
	
if flag==1:
	
	a1=str(aa)
	b1=str(bb)
	x1=str(x)
	xxx=a1+b1
	


	# len2=len(a1)
	# print(typeof(a1))
	if xxx!=x1:
		while(xxx!=x1):
			aa=int(aa*10)
			a1=str(aa)
			b1=str(bb)
			xxx=a1+b1
		
		
	print("YES")
	print(aa)
	print(bb)
	
	

	
else:
	print("NO")
	
	
