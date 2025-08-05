#hash map also known as dictionary are the collection of key value pairs key will always unique in nature however two keys have the same values
d={1:"gaurav",2:"ram",3:"narendra"};
print(type(d))
for k,v in d.items():
    print(k,v);
d[4]="devil"
for v in d.items():
    print(v)