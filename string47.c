//create a string firstName and lastName to store details of user and print all he character using loop.
// string end where null character come.
//"%s"- specially for string
//"%c" char by char

#include<stdio.h>
void printString(char arr[]);//string end where null character come whereas in normal array we don't know the size of array

int main()
{
    char firstName[] = "Navneet";
    char lastName [] = "Sen";

    printString(firstName);
    printString(lastName);

    return 0;
}

void printString(char arr[]){
    for(int i=0; arr[i] != '\0' ; i++){
        printf("%c",arr[i]);
    }
    printf("\n");
} 