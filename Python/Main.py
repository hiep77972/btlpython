import time
from random import *
from InsertionSort import *
from SelectionSort import *
from InterchangeSort import *
from BubbleSort import *
def nhap(a,n):
    for i in range(n):
        x=int(input())
        a.append(x)
ok=1
while(ok):
    print("\nchon chuc nang: ")
    print("\n1: Nhap Mang ")
    print("\n2: Nhap Mang ngau nhien")
    print("\n3: In Mang")
    print("\n4: BubbleSort")
    print("\n5: InsertionSort")
    print("\n6: SelectionSort")
    print("\n7: InterchangeSort")
    print("\n0: thoat\n")
    ok=int(input())
    if ok==0:
         break
    if ok==1:
        a=[]
        n=int(input("n= "))
        nhap(a,n)
    if ok==2:
        a=[]
        n=int(input("n= "))
        a=[randrange(-100,100) for i in range(n)]
    if ok==3:
        print(a)
    if ok==4:
        start_time = time.time()
        BubbleSort(a)
        print("--- %s seconds ---" % (time.time() - start_time))
        print(a)
    if ok==5:
        start_time = time.time()
        InsertionSort(a)
        print("--- %s seconds ---" % (time.time() - start_time))
        print(a)
    if ok==6:
        start_time = time.time()
        SelectionSort(a)
        print("--- %s seconds ---" % (time.time() - start_time))
        print(a)
    if ok==7:
        start_time = time.time()
        InterchangeSort(a)
        print("--- %s seconds ---" % (time.time() - start_time))
        print(a)
    
