from math import sqrt
def prime(n):
    if n<=1:
            return False
    i=2
    end=int(sqrt(n))
    while i<=end:
        if(n%i==0):
            return False
        i=i+1
    return True

n=int(input())
arr=list(map(int,input().split()))
sum=0
for i in range(0,n,1):
     x=prime(arr[i])
     if x==True:
          sum=sum+i

if(prime(sum)==True):
     ans=True
else:
    ans=False
print(ans)