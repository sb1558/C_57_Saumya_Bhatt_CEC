/* 
    5 4 3 2 1
     4 3 2 1
      3 2 1
       2 1
        1
*/
#include<stdio.h>
int main(){
	int i,j,k,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<i;j++)
			printf(" ");
		for(k=0;k<n-i;k++)
			printf("%d ",n-i-k);
		printf("\n");
	}
}
