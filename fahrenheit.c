//write a function to convert fahrenheit in celsius //
#include<stdio.h>
float convertTemp(float fahrenheit);
int main()
{
    float cel = convertTemp(0);
    printf("cel is %f",cel);
    return 0;
} 

float convertTemp(float fahrenheit)
{
    float cel = fahrenheit + 273.5;
    return cel;
}