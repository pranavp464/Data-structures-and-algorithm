#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int n,a,b;
    printf("Please enter the length of pyramid");
    scanf("%d",&n);
    for(a=n;a>=1;a--)
    {
        for(b=1;b<=a;b++)
        {
            printf("*");
        }
        printf("\n");
    }
} 