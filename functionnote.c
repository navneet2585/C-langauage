//2.changes to parameters in function don't changes the values in calling function.(because a copy of argument is passed to the function)//

#include<stdio.h>

void calculateprice(float value);

int main()
{
    float value =100.0;
    calculateprice(value);
    printf("value is : %f\n",value);
    return 0;
}

void calculateprice(float value)
{
    value = value + (0.18 * value);
    printf("final price is : %f\n",value);
} 