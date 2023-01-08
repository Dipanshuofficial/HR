if __name__ == '__main__':
    m=[]
    l=[]
    a=[]
    def secmin(lis):
        o=lis[0][1]
        for u in lis:
            if(u[1]!=o):
                g=u
                break
        return g
        
        
    for x in range(int(input())):
        name = input()
        score = float(input())
        m=[name,score]
        l.append(m)
        m=[]
    l.sort(key=lambda x: x[1])
    y=secmin(l)
    for t in l:
        if(t[1]==y[1]):
            a.append(t)
    a.sort()
    for f in a:
        print(f[0])
