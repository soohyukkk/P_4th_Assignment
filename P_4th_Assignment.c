#include <stdio.h>
int main()
{
	int r1,c1,r2,c2,a[100][100],b[100][100],result[100][100],i,j,k,count=0;
	while(1){
		printf("Enter rows and column for first matrix:");
		scanf("%d %d",&r1,&c1);
		printf("Enter rows and column for second matrix:");
		scanf("%d %d",&r2,&c2);
		if(c1!=r2){
			printf("Error! column of first matrix not equal to row of second.\n\n");
		}
		else
			break;
	}
 
	puts("");
 
	printf("Enter elements of matrix 1:\n");
	for(i=0; i<r1; ++i){
		for(j=0; j<c1; ++j){
			printf("Enter elements a%d%d:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
 
	puts("");
 
	printf("Enter elements of matrix 2:\n");
	for(i=0; i<r2; ++i){
		for(j=0; j<c2; ++j){
			printf("Enter elements b%d%d:",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
 
	for(i=0; i<r1; ++i){
		for(j=0; j<c2; ++j)
			result[i][j]=0;
	}
 
	for(i=0; i<r1; ++i){
		for(j=0; j<c2; ++j){
			for(k=0; k<c1; ++k)
				result[i][j]+=a[i][k]*b[k][j];
		}
	}
 
	puts("");
 
	printf("Output Matrix:\n");
	for(i=0; i<r1; ++i){
		for(j=0; j<c2; ++j){
			if(count++%c2==0)
				puts("");
			else
				printf("");
			printf(" %d ",result[i][j]);
		}
	}
 
	puts("");
 
	return 0;
}