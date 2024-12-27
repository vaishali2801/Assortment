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
			scanf(" %d",&arr[i][j]);
		}
		
		printf("\n");
		
	}
	
	int sum = 0;
	
	int k;
	
	for(i=0 ;i<r ;i++){
		 printf("Elements of row :");
		 
		for(j=0 ;j<c ;j++){
			
			for(k=0 ;k<r ;k++){
				if(i==k){
		    	
		    	printf("%d,",arr[i][j]);
		    	
	    	    }
	    	}	
	    }
	
		printf("\n");	
	  }

    for(i=0 ;i<r ;i++){
		
		for(j=0 ;j<c ;j++){
	    	sum += arr[i][j];	
		}
		printf("\n");
		printf("The sum of a row : %d \n",sum);
		sum = 0;
	}
	printf("--------------\n");
	
		for(j=0 ;j<c ;j++){
				printf("Elements of column :");
			for(k=0 ;k<r ;k++){
		    	printf("%d,",arr[k][j]); 
		    	sum +=arr[k][j];
		    
	    }
	        printf("\n");
		    printf("The sum of a column : %d \n",sum);
		    sum = 0;	
	}


	
	  	
	return 0;
}
