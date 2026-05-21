#include<stdio.h>
int main()
{
    int i , j ,a;
    for (i=1 ; i<=4 ; i++)
    {
        for (a = 1 ;a<=4-i  ;a++)
        {
            printf(" ");
        }
            for(j = 1; j<=2*i-1 ;j++)
        {
            printf("*\t");                     
        }
        printf("\n");
    }
    return 0;
}
