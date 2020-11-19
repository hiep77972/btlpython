def SelectionSort(a):
    n=len(a)
    for i in range(n-1):
        min=i
        for j in range(i+1,n):
            if a[j]<a[min]:
                min=j
        a[min],a[i]=a[i],a[min]
