//write the function that print Namaste if user is Indian & Bonjour is the user is french//
#include<stdio.h>

void namaste(); //declare
void bonjour();

int main()
{    
    printf("enter f for french and i for indian :");
    char ch;
    scanf("%c",&ch);

    if(ch == 'i')
    {
      namaste();   
    }
    else{
        bonjour();
    }
    return 0;
}

void namaste()   //first function
{
    printf("Namaste\n"); 
}

void bonjour()  // second function
{
    printf("Bonjour\n");
}