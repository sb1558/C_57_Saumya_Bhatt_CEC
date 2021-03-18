/* 
54321
4321
321
21
1
*/
#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++)
			printf("%d",n-i-j);
		printf("\n");
	}
}
