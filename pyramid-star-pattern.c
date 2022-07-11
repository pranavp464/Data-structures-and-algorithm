#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int row, col,a,b;
    printf("Please enter the number of rows and columns");
    scanf("%d",&row);
    scanf("%d",&col);
    for(a=1;a<=row;a++)
    {
        for(b=1;b<=col;b++)
        {
            if(a==1||a==row)
            {
                printf("*");
            }
            else if(b==1||b==col)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n")   ;
     }
}