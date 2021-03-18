/* 
       1
      123
     12345
      123
       1
*/
#include<stdio.h>
int main(){
	int i,j,k,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++)
			printf(" ");
		for(k=0;k<2*i+1;k++)
			printf("%d",k+1);
		printf("\n");
	}
	for(i=n-2;i>=0;i--){
		for(j=1;j<n-i;j++)
			printf(" ");
		for(k=0;k<2*i+1;k++)
			printf("%d",k+1);	
		printf("\n");
	}
}
