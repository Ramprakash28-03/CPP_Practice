def count_freq(strr):
    d={}
    for i in strr:
        d[i]=0
    for i in strr:
        d[i]=d[i]+1
    for k,v in d.items():
        #if k.isspace()!=True:
        #if k!=" ":
            print(k,"occured",v,"times")

strr=input()
count_freq(strr)
