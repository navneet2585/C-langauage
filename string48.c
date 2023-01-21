//ask the user to enter their firstName & print it back to them and also try this with their fullName. 
#include<stdio.h>

 void printString(char arr[]);
 int main()
 {
    //char firstName[50];
    //scanf("%s",firstName);
    //printf("your name is :%s",firstName);

    char fullName[100];
    scanf("%s",fullName);
    printf("your name is : %s",fullName);
    return 0;
 }

 void printString(char arr[]){
    for(int i=0;arr[i] !='\0';i++){
        printf("%c",arr[i]);
    }
 }


/*here in output -  we see that scanf() cannot input multi- word string with spaces means -
if we write a sentence then it will only show us first word not other words */