/* 
	123454321
	 1234321
	  12321
	   121
	    1
*/
#include<stdio.h>
int main(){
	int i,j,k,l,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<i;j++)
			printf(" ");
		for(k=0;k<n-i;k++)
			printf("%d",k+1);
		for(l=0;l<n-i-1;l++)
			printf("%d",n-i-l-1);
		printf("\n");
	}
}
