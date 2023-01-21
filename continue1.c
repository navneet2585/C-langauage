//print all the number from 0 to 10 except 7//
 #include<stdio.h>
int main()
{
    for(int i=1;i<=10;i++)
    {
        if (i ==  7) //skip//
        {
            continue;
        }
        printf("%d\n",i);

    }
    return 0;
}