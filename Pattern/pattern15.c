/* 
	*********
	 *******
	  *****
	   ***
	    *
*/
#include<stdio.h>
int main(){
	int i,j,k,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<i;j++)
			printf(" ");
		for(k=0;k<n*2-2*i-1;k++)
			printf("*");
		printf("\n");
	}
}
