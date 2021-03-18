#include<stdio.h>
void insertion(int a[30],int n){
	int i,j,key,c=0,s=0;
	for(i=1;i<n;i++){
		key=a[i];
		for(j=i-1;j>=0 && a[j]>key;j--){
				a[j+1]=a[j];
				c++;
			}
			a[j+1]=key;
			s++;
		}
	printf("Array after Insertion sort: \n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int i,n,a[30];
	printf("Enter the value of n: ");
		scanf("%d",&n);
		printf("Enter the elements of the array: \n");
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		insertion(a,n);
	return 0;
}
