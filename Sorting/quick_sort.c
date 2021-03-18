#include<stdio.h> 
void swap(int *a, int *b){ 
	int t; 
	t=*a; 
	*a=*b; 
	*b=t; 
}
int partion(int a[],int l,int r){ 
	int pivotIndex=l+rand()%(r-l+1); 
	int pivot=a[pivotIndex],i=l-1,j;
	swap(&a[pivotIndex],&a[r]); 
	for (j=l;j<r;j++){ 
		if(a[j]<pivot){ 
			i++; 
			swap(&a[i],&a[j]);
		} 
	} 
	swap(&a[i+1],&a[r]);  
	return i + 1; 
}
void quick_sort(int a[],int l,int r) { 
	int j; 
	if(l<r) { 
		j=partion(a,l,r); 
		quick_sort(a,l,j-1);
		quick_sort(a,j+1,r); 
	} 
} 
int main() { 
	int i,n,a[30]; 
		int c=0,s=0; 
		printf("Enter the value of n: ");
		scanf("%d",&n); 
		printf("Enter the elements in the array: \n");
		for(i=0;i<n;i++) { 
 			scanf("%d",&a[i]); 
		} 
		quick_sort(a,0,n-1); 
		printf("Array after quick sort: \n");
		for( i=0;i<n;i++) 
			printf("%d ",a[i]);  
 } 
