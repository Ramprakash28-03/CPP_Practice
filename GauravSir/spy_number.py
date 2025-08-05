# A number is said to by spy number if sum of its digit is equal to product of its digit eg- 22, 1412 etc.
def spy(n):
    sum=0
    prod=1
    while(n!=0):
        b=n%10
        sum=sum+b
        prod=prod*b
        n=n//10
    if(sum==prod):
        return True
    return False
n=int(input())
arr=list(map(int,input().split()))
sum=0
for i in range(0,n,1):
     x=spy(arr[i])
     if x==True:
          sum=sum+arr[i]

print(sum)