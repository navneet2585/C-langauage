//print the numbers from 0 to n,if n is given by user//
#include<stdio.h>
int main()
{
    int i=0,n;
    printf("enter the number :");
    scanf("%d",&n);

    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}

