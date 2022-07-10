#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int n;
    printf("please enter the number to check divisibility");
    scanf("%d",&n);
    if(n%2==0 && n%3==0)
    {
        printf("the number %d is divisible by 2 and 3",n);
    }
    else if(n%2==0)
    {
        printf("the number %d is only divisible by 2",n);
    }
    else if(n%3==0)
    {
        printf("the number %d is only divisible by 3",n);
    }
    else
    {
        printf("the number %d is not divisible by 2 and 3",n);
    }
    
}