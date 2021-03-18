/* 
       1
      121
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
		for(j=0;j<n-i-1;j++)
			printf(" ");
		for(k=0;k<i+1;k++)
			printf("%d",k+1);
		for(l=i;l>0;l--)
			printf("%d",l);
		printf("\n");
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<=i;j++)
			printf(" ");
		for(k=1;k<n-i;k++)
			printf("%d",k);	
		for(l=0;l<n-i-2;l++)
			printf("%d",n-i-l-2);
		printf("\n");
	}
}
