//write a function to convert celsius to fahrenheit
#include<stdio.h>
float convertTemp(float celsius);
int main()
{   
    float far = convertTemp(37);
    printf("far is %f",far);
    return 0;
}

float convertTemp(float celsius)
{     
    //write value in float for formula for correct result or else it will make it in integer value that will give you wrong result//
    float far = celsius * (9.0/5.0) + 32; //like her take it 1.8 or which is written her in formula (9.0/5.0),if not then when compiler divide it it gives you 1 not 1.8// 
    return far;
}

