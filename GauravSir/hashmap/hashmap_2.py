# d1={1:"india",2:"Australia",3:"New Zealand",4:"pakistan",5:"south africa"}
# for k,v in d1.items():
#     print(k,v)



# The searching time complexity of hash map is O(1)
#count the frequency of each element inside the array
def freq_count(n,arr):
    d={}
    for i in arr:
        d[i]=0
    for i in arr:
        d[i]=d[i]+1
    for k,v in d.items():
        print(k,"occured",v,"times")
n = int(input())
arr = list(map(int,input().split()))
freq_count(n,arr)