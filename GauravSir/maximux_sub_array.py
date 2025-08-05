def maxsubarray(n,arr):
    if all (i<0 for i in arr):
        return max(arr)
    sum = 0
    maxi = 0
    for i in range (0,n,1):
        sum=sum+arr[i]
        if sum<0:
            sum=0
        if sum>maxi:
            maxi=sum
    return maxi


n=int(input())
arr= list(map(int,input().split()))
x=maxsubarray(n,arr)
print(x)

# def allNegative(n,arr):
#     for i in range(n): 
#         if arr[i]>0: 
#             return False
#     return True

# n=int(input())
# arr=list(map(int,input().split()))
# x=allNegative(n,arr)
# print(x)