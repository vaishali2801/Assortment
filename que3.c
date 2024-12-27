#include<stdio.h>

int main(){
	
	int i,j,r,c;
	
	printf("Enter the array's row size:");
	scanf("%d",&r);
	
	printf("Enter the array's column size:");
	scanf("%d",&c);
	
	int arr[r][c];
	
	printf("Enter array's elements: \n");
	
	for(i=0 ;i<r ;i++){
		
		for(j=0 ;j<c ;j++){
			
			printf("arr[%d][%d] :",i,j);
			scanf("%d",&arr[i][j]);
		}
		
		printf("\n");
		
	}
	printf("The transpose matrix of an array: \n");
	for(i=0 ;i<r ;i++){
		
		for(j=0 ;j<c ;j++){
			
			printf(" %d ",arr[j][i]);
		}
		
		printf("\n");
		
	}
	
	return 0;
}
