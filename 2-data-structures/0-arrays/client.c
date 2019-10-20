// C program to implement linear  
// search in unsorted array 
#include<stdio.h> 
  
#include "arrayLib.h"

// Driver Code 
int main() 
{   
    int i, key;
    int arr[20] = {12, 16, 20, 40, 50, 70}; 
    int n = 6;
    int capacity = sizeof(arr) / sizeof(arr[0]); 
    
    printf("Initial array: "); 
    for (i = 0; i < n; i++) 
        printf("%d  ", arr[i]); 


    
    key = 40; // Using this element as search element 
    int position = findElement(arr, n, key); 
  
    if (position == - 1) 
        printf("\nElement not found"); 
    else
        printf("\nElement %d Found at Position: %d\n\n", key, position + 1 ); 

    key = 26; // Using this element to insert it

    printf("\nBefore Insertion: "); 
    for (i = 0; i < n; i++) 
        printf("%d  ", arr[i]); 
  
    // Inserting key 
    n = insertSorted(arr, n, key, capacity); 
  
    printf("\nAfter Insertion: "); 
    for (i = 0; i < n; i++) 
        printf("%d  ",arr[i]); 

    key = 16; // Using this element to delet it
  
    printf("\n\n\nArray before deletion\n"); 
    for (i = 0; i < n; i++) 
      printf("%d  ", arr[i]); 
  
    n = deleteElement(arr, n, key); 
  
    printf("\nArray after deletion\n"); 
    for (i = 0; i < n; i++) 
      printf("%d  ", arr[i]); 
  
    return 0; 
} 