#include<stdio.h>
int main()
{
     float price =100.00; 
     float *ptr = &price; //normal variable stored in pointer
     float **pptr = &ptr;  // pointer variable stored in pointer to pointer
}