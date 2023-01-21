//write a function to calculate the sum ,product and average of 2 numbers.print hat average in the main function 
#include<stdio.h>

void doWork(int a,int b,int *sum,int *avg,int *prd);
int main(){
    int a =5,b=10;
    int sum,prod,avg;
    doWork(a, b, &sum, &prod,&avg);
    printf("sum = %d , prod = %d,avg =%d\n ",sum,prod,avg);
    return 0;
    
}

//reference
void doWork(int a,int b,int *sum,int *prod,int *avg){
    *sum = a + b;
    *prod = a*b;
    *avg = (a+b)/2;
}