//print the factorial of n number (this question is for small factorial )//
//for factorial we will initialize it fact = 1 (because if we multiply any number with zero it becomes zero thats why we multiply by 1)//
//where as when we have to add then we initialize sum = 0//

#include<stdio.h>
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);

    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("final factorial is %d",fact);

    return 0;
}