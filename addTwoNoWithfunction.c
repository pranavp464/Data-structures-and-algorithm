#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;
    printf("Enter the two nos. :");
    scanf("%d%d",&a,&b);
    //c=a+b;
    c = MadKing(a,b);
    printf("Addition of two nos is : %d",c);
    
    
    //c= Add(5,5);  
}

int MadKing(int a,int b)
{
    int i;
    i=a+b;
    return i;
}