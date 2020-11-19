def InterchangeSort(a):
    n=len(a)
    for i in range(n-1):
        for j in range(i+1,n):
            if a[i] > a[j]:
                a[i], a[j] = a[j], a[i] 
