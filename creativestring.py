from collections import Counter
t,n=map(int,input().split())
r=[]
s=[list(input()) for i in range(t)]
v=list(zip(*s))
for i in v:
    b=Counter(sorted(list(i)))
    hv=b.most_common(1)
    r.append(hv[0][0])
print("".join(r))
