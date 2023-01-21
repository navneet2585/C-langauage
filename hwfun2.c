//write a function to find square root of a number//
#include<stdio.h>
int Squ(int a);
int main()
{
    int a = 5;
    printf("Square is : %d",a*a);
    return 0;

}

int Squ(int a)
{
    int square = a * a;
    return square;
}