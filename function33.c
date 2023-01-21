//write a function to calculate percentage of student in maths,science and english
#include<stdio.h>

int  calPercentage(int maths,int science,int english);
int main()
{
    int science = 85;
    int english = 89;
    int maths = 97;
    printf("calPercenatge is : %d",calPercentage(science,maths,english));
    return 0;
}

int calPercentage(int maths,int science,int english)
{
    return((science + maths + english)/3);
}