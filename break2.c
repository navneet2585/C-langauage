//keep taking the number as input from user until user enters a number which is multiple of 7//
#include<stdio.h>
int main()
{
    int n;
    do
    {   
        printf("enter the number :");
        scanf("%d",&n);
        printf("%d \n",n);

        if(n % 7==0) // multiple of 7
        {
            break;
        }

     }while(1);
    printf("end");

    return 0;
}