#include<stdio.h>

int main(){
	
    int size, i;
    
    printf("Enter the array's size: ");
    scanf("%d", &size);

    int arr[size]; 

    
    printf("Enter array's elements: \n");
    
    for (i = 0; i < size; i++) {
    	
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
        
    }
    
    printf("Negative elements is: ");
    
    for (i = 0; i < size; i++) {
    	
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");



    return 0;
}
