#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int row,col,a,b;
    printf("Please enter the rows and columns you want");
    scanf("%d",&row);
    scanf("%d",&col);
    for(a=1;a<=row;a++)
    {
        for(b=1;b<=col;b++)
        {
            printf("*");
        }
        printf("\n");
    } 
     
}