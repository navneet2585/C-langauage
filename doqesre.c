//print the sum of first n natural numbers//also in reverse with j//
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);

    int sum=0;
    for(int i=1,j=n;i<=n && j>=1;i++,j--)        //here 'i' is for calculating sum and 'j' is for reverse number print //
    {
        sum = sum +i;
        printf("%d \n",j);
    }
    printf("sum is %d \n",sum);

    return 0;
}