#include<stdio.h>

int main()
{
    int age = 25;
    int *ptr = &age;
    int _age = *ptr;

    printf("%d",_age);
    return 0;

}