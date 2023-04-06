#include<stdio.h>
void main(){
   int arr[] = {3, 45, 56, 73, 53}, i;
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    printf("Elements of given array: \n");    
    //Loop through the array by incrementing value of i     
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }      

}