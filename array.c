#include<stdio.h>
int main(){
    int marks[3];

    printf("enter the phy :");
    scanf("%d",&marks[0]);

    printf("enter the chem :");
    scanf("%d",&marks[1]);

    printf("enter the math :");
    scanf("%d",&marks[2]);  // don't mistake here for calling value 


    printf("phy = %d , chem = %d ,math = %d",marks[0],marks[1],marks[2]);

    return 0;
}

