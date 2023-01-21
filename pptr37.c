//print the value(*) of'i'from its pointer to pointer
// * - for value
// & - for address 

#include<stdio.h>
int main()
{
    int i = 9;
    int *ptr = &i;
    int **ptr = &ptr;

    printf("%d\n", **ptr);

    return 0;
}