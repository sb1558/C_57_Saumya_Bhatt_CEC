#include<stdio.h>
void mergeSort(int a[],int l,int r){
	 if(l<r){
	 	int m=l+(r-l)/2;
	 	mergeSort(a,l,m);
	 	mergeSort(a,m+1,r);
	 	merge(a,l,m,r);
	 }
}
void merge(int a[],int l,int m,int r){
	int n1=m-l+1, n2=r-m;
	int L[n1],R[n2],i=0,j=0,k=0;
	while(i<n1){
		L[i]=a[l+i];
		i++;
	}
	while(j<n2){
		R[j]=a[m+1+j];
		j++;
	}
	i=0,j=0,k=l;
	while(i<n1 && j<n2){
		if(L[i]<=R[j])
			a[k++]=L[i++];
		else
			a[k++]=R[j++];
	}
	while(i<n1){
		a[k++]=L[i++];
	}
	while(j<n2){
		a[k++]=R[j++];
	}
}
int main()
{
	int n,i;
	printf("Enter the value of n: \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements in the array: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	mergeSort(a,0,n-1);
	printf("Array after merge sort");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
