// C program for array implementation of stack 
#include <limits.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include "stackLib.h"
  
// Driver program to test above functions 
int main() 
{ 
    struct Stack* stack = createStack(100); 
  
    printf("isEmpty() = %d\n", isEmpty(stack)); 

    push(stack, 10); 

    printf("isEmpty() = %d\n", isEmpty(stack)); 
    
    push(stack, 20); 
    push(stack, 30); 
    push(stack, 40); 
  
    printf("%d popped from stack\n", pop(stack)); 
    printf("%d is in the peek\n", peek(stack)); 
    printf("isFull() = %d\n", isFull(stack)); 
  
    return 0; 
} 