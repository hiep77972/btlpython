#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include"sapxep.h"
void nhap(int a[],int n){
	int i;
	srand(time(0));
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
}
void nhap2(int a[],int n){
	int i;
	srand(time(0));
	for(i=0;i<n;i++)
	a[i]=1+rand()%50;
}
void in(int a[],int n){
	int i;
	for(i=0;i<n;i++)
	printf("%5d",a[i]);
		
}
int main(int argc, char *argv[]) {
	clock_t start,end;
	double time_use;
	int n;
	int *a;
		int ok;
do{
		printf("\nchon chuc nang: ");
		printf("\n1: Nhap Mang ");
		printf("\n2: Nhap Mang ngau nhien");
		printf("\n3: In Mang");
		printf("\n4: BubbleSort");
		printf("\n5: InsertionSort");
		printf("\n6: SelectionSort");
		printf("\n7: InterchangeSort");
		printf("\n0: thoat\n");
		scanf("%d", &ok);
		
		switch(ok){
			case 1:
			printf("n= ");
			scanf("%d",&n);
			a=(int*)malloc(n*sizeof(int));
			nhap(a,n);
			break;
			case 2:
				printf("n= ");
				scanf("%d",&n);
				a=(int*)malloc(n*sizeof(int));
				nhap2(a,n);
				break;
			case 3:
				in(a,n);
				break;
			case 4:
			start=clock();
			BubbleSort(a,n);
			end=clock();
			time_use= (double)(end-start);
			in(a,n);
			printf("\n--- %f seconds ---\n",time_use);
			break;
			case 5: 
			start=clock();
			InsertionSort(a,n);
			end=clock();
			time_use= (double)(end-start);
			in(a,n);
			printf("\n--- %f seconds ---\n",time_use);
			break;
			case 6:
			start=clock();
			SelectionSort(a,n);
			end=clock();
			time_use= (double)(end-start);
			in(a,n);
			printf("\n--- %f seconds ---\n",time_use);
			break;
			case 7:
			start=clock();
			InterchangeSort(a,n);
			end=clock();
			time_use= (double)(end-start);
			in(a,n);
			printf("\n--- %f seconds ---\n",time_use);
			break;
		}
	}while(ok!=0);
	return 0;
}
