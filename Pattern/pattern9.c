/* 
    *
   * *
  * * *
 * * * *
* * * * *
*/
#include<stdio.h>
int main(){
	int i,j,k,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++)
			printf(" ");
		for(k=0;k<=i;k++)
			printf("*");
		printf("\n");
	}
}