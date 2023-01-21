//Argument - values that are passed in function call//
//Parameter - values in function declaration and definition //
 

#include<stdio.h>

 int sum(int a,int b);
 void printTable(int n);        //create a function by declarating printTable 

 int main()
 {
    int n;                              //take
    printf("enter the number :");       //number
    scanf("%d",&n);                      // from user            

    printTable(n);  //Argument/actual paraeter(which are in brackets) // and call is printTable 

    return 0;
 }

 int sum (int x,int y)
 {
    return x + y;
 }

 void printTable(int n) //Parameter /formal parameter(which is in bracket)
 {
    for(int i=1;i<=10;i++)
    {
        printf("%d \n",i*n);
    }
 }
