#include<stdio.h>
void selection(int a[30],int n){
	int i,j,pos,c=0,s=0,t;
	for(i=0;i<n-1;i++){
		pos=i;
		for(j=i+1;j<n;j++){
				if(a[pos]>a[j]){
				pos=j;
				}
			c++;
			}
			if(pos!=i){
				t=a[i];
				a[i]=a[pos];
				a[pos]=t;
			}
			s++;
	}
	printf("Array after Selection Sort: \n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int i,n,a[30];
	printf("Enter the value of n:");
		scanf("%d",&n);
		printf("Enter the elements of the array: \n");
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		selection(a,n);
	return 0;
}
