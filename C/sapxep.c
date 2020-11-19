#include"sapxep.h"
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
void InsertionSort(int a[],int n){
	int i;
	for(i=1;i<n;i++){
		int x=a[i];
		int pos=i;
		while(pos>0 && a[pos-1]>x){
			a[pos]=a[pos-1];
			pos--;
			}
		a[pos]=x;
	}
}
void SelectionSort(int a[], int n)
{
	int i;
for (i = 0; i < n - 1; i++){
int max = i;
int j;
for (j = i + 1; j < n; j++)
{
if (a[max] > a[j]){
max = j;
}
}
if (max != i){
a[max] ^= a[i];
a[i] ^= a[max];
a[max] ^= a[i];
}
}
}
void InterchangeSort(int a[],int n){
	int i,j;
	int tg;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j])
			swap(&a[i], &a[j]); 
		}
	}
}
void BubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)       
    for (j = n-1; j >i; j--)  
        if (arr[j] < arr[j-1])  
            swap(&arr[j], &arr[j-1]);  
} 
