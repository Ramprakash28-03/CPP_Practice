def freq(strr):
    d={}
    for i in strr:
        d[i]=0
    for i in strr:
        d[i]=d[i]+1
    for k,v in d.items():
        if v>1:
            print(k,v)
strr=input()
freq(strr)