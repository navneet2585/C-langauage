//Pointer Arithematic
//Pointer can be increment and decrement 


#include<stdio.h>
int main()
{
    
    //case 1 for integer 
    /*int age = 24;
    int *ptr = &age;

    printf("ptr = %u\n", ptr );
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u\n", ptr);*/



    //case 2 for float 
    /*float age = 24;
    float *ptr = &age;

    printf("ptr = %u\n", ptr );
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u\n", ptr);*/

    //case 3 for char
    char star ='*';
    char *ptr = &star;

    printf("ptr = %u\n", ptr );
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u\n", ptr);

    return 0;
}