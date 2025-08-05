# arr=[13 2 5 3 2 7 5 2 7 2 4]
def prime(sum):
    for i in range(2,sqrt(sum),1):
        if sum%i == 0:
            return False
    return True
def freq(arr,sum):
    d={}
    for i in arr:
        d[i]=0
    for i in arr:
        d[i]=d[i]+1
    for k,v in d.items():
        if v==1:
            sum=sum+v

n=int(input())
arr=list(map(int,input().split()))
sum=0
freq(arr,sum)
print(sum)
