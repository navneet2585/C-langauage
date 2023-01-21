#include<stdio.h>

int sum(int a,int b);

int main()
{
    int a,b;
    printf("enter the number a and b :");
    scanf("%d%d",&a,&b);
   

    int s = sum(a,b);
    printf("sum is : %d \n",s);
    return 0;

}

int sum(int a,int b)
{
    return a + b;
}