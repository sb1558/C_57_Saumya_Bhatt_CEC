#include<stdio.h>
void swap(int *a, int *b){ 
	int t; 
	t=*a; 
	*a=*b; 
	*b=t; 
}
void bubbleSort(int a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				swap(&a[j],&a[j+1]);
			}
		}
	}
}
int main()
{
	int n,i;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements in the array: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	bubbleSort(a,n);
	printf("Array after bubble sort: \n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
