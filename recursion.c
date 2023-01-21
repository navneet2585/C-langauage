//print "Helllo World" 5 times//
#include<stdio.h>
void printH(int n);
int main()
{
   printH(5);
   return 0;
}

//Recursive function 
void printH(int n)
{
    if(n == 0){
        return;
    }
    printf("Hello World \n");
    printH(n - 1);
}