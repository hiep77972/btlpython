#include"sapxep.h"
void swap(long *xp, long *yp)  
{  
    long temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
void InsertionSort(long a[],long n){
	long i;
	for(i=1;i<n;i++){
		long x=a[i];
		long pos=i;
		while(pos>0 && a[pos-1]>x){
			a[pos]=a[pos-1];
			pos--;
			}
		a[pos]=x;
	}
}
void SelectionSort(long a[], long n)
{
	long i;
for (i = 0; i < n - 1; i++){
long min = i;
long j;
for (j = i + 1; j < n; j++)
{
if (a[min] > a[j]){
min = j;
}
}
if (min != i){
a[min] ^= a[i];
a[i] ^= a[min];
a[min] ^= a[i];
}
}
}
void InterchangeSort(long a[],long n){
	long i,j;
	long tg;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j])
			swap(&a[i], &a[j]); 
		}
	}
}
void BubbleSort(long arr[], long n)  
{  
    long i, j;  
    for (i = 0; i < n-1; i++)       
    for (j = n-1; j >i; j--)  
        if (arr[j] < arr[j-1])  
            swap(&arr[j], &arr[j-1]);  
} 
