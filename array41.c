//W.A.P to nter price of 3 items and print their final cost with G.S.t

#include<stdio.h>
int main()
{
    float item[3];

    printf("enter the 3 items :\n");
    scanf("%f%f%f",&item[0],&item[1],&item[2]);

    printf("total price 1 : %f",item[0]+0.18*item[0]);
    printf("total price 2 : %f",item[1]+0.18*item[0]);
    printf("total price 3 : %f ",item[2]+0.18*item[0]);

    return 0;
}