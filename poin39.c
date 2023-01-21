//will the address output e same 
/* #include<stdio.h>
void printAddress(int n);
int main(){
    int n =4;
    printf("%p\n",&n);
    printAddress(n);

    return 0;
}
// call by value
void printAddress(int n){
    printf("%p\n",&n);
}*/

#include<stdio.h>
void printAddress(int n);
int main(){
    int n =4;
    printAddress(n);
    printf("address of n is:%u\n ",&n);
    return 0;
}

// call by value
void printAddress(int n){
    printf("address of n is:%u\n ",&n);
}