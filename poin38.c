//swap 2 number 'a' and 'b'
/* in this question always use a third number or a block which is empty like temp*/
#include<stdio.h>
void swap(int a,int b);
void _swap(int *a,int *b);
int main()
{
    int x=4,y=5;
    _swap(&x,&y);

    printf("x = %d & y = %d\n",x,y); 

    return 0;
}

// call by referrence
void _swap(int *a,int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

//call by value
void swap(int a,int b){
    int t = a;
    a = b;
    b = t;

    printf("a = %d & b = %d\n",a,b); 
}