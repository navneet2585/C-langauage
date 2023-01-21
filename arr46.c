//create a 2D array,storing the tables of 2 and 3
#include<stdio.h>
void storeTable(int arr[][10],int n,int m,int number);
int main()
{                                   //important point when we pass 2D array we have to defined(whici is size) in 2nd D
    int table[2][10];
    storeTable(table ,0,10,2);
    storeTable(table ,1,10,3);

    for(int i=0;i<10;i++){// 0 to 10
        printf("%d\t",table[0][i]);

    }
    printf("\n");

    for(int i=0;i<10;i++){//0 to 10
        printf("%d\t",table[1][i]);
    }
    printf("\n");

    return 0;
}

void storeTable(int arr[][10],int n,int m,int number){ 
    for(int i=0;i<m;i++){// 0 to 10
        arr[n][i] = number *(i+1);//2,4,6,8...
    }//here arr is showing red line beacuse when we pass 2D array 1st D is like pointer and 2nd D is like actual array(so we have to defined size i.e we written 10 )
}