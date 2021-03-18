#include<stdio.h>
void inversion(int a[],int n){
	int i,j,inv=0;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j])
				inv++;
		}
	}
	printf("Inversions %d",inv);
}

int main()
{
	int n,i;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	inversion(a,n);
}
