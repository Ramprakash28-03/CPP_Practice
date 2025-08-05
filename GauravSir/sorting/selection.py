def selection_sort(n,arr):
    for i in range(0,n,1):
        for j in range(i+1,n,1):
            if(arr[i]>arr[j]):
                arr[i],arr[j] = arr[j],arr[i]
    return arr

n=int(input())
arr=list(map(int,input().split()))
print(selection_sort(n,arr))