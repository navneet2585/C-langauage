//sum of first n natural number // Hint : 1(base case(last call))+2+3.....(n-1)+n//
//recursion is like a factorial tree  which is do his own work step by step in less time//
#include<stdio.h>
 int sum(int n);
 int main()
 {
    printf("sum is : %d",sum(5));
    return 0;
 }

 //recursive function
 int sum(int n)
 {
    if(n == 1){
        return 1; 
    }
    int sumNm1 = sum(n-1); // sum of 1 to n
    int sumN = sumNm1 + n;
    return sumN;
 }
 