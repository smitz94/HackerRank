# Enter your code here. Read input from STDIN. Print output to STDOUT
T=int(raw_input())
i=0
a=[]
j=0
h=1
h1=0
for i in range(T):
    a.append(input())
h1=h    
for i in range(T):
    for j in range(a[i]):
        if(j%2==0):
            h1=2*h1
        else:
            h1=h1+1
    print h1
    h1=h
