# reverse of string 
def rev(strs):
    strs=list(strs)
    start=0
    end=len(strs)-1
    for i in range(0,start<=end,1):
        strs[start],strs[end] = strs[end],strs[start]
        start=start+1
        end=end-1
    return ''.join(strs)

strs=str(input())
reverse=rev(strs)
print(reverse)
