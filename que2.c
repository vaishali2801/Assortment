#include<stdio.h>

int main(){
	
    int i, j, R, C;
	
	printf("Enter the array's row size:");
	scanf("%d",&R);
	
	printf("Enter the array's column size:");
	scanf("%d",&C);
	 
    int arr[R][C];

	for(i=0 ;i<R ;i++){
		
		for(j=0 ;j<C ;j++){
			 
			 printf("Arr[%d][%d] :",i , j);
			 scanf("%d",&arr[i][j]);
			 
		}
		printf(" \n");
			
	}
	
    int largest = arr[0][0]; 
    
    for (i = 0; i < R; i++) {

        for (j = 0; j < C; j++) { 
        
            if (arr[i][j] > largest) {
                largest = arr[i][j];  
            }
        }
    }

    printf("The largest element is: %d \n", largest);

    return 0;
}
