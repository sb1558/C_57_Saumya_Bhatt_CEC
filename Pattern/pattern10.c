/* 
    1
   2 1
  3 2 1
 4 3 2 1
5 4 3 2 1
*/
#include<stdio.h>
int main(){
	int i,j,k,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++)
			printf(" ");
		for(k=i+1;k>0;k--)
			printf("%d ",k);
		printf("\n");
	}
}
