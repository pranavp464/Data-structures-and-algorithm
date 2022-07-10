#include<iostream>
using namespace std;

int main()
{
   int n;
   cout<<"Enter the number you want factorial of ";
   cin>>n;
   int fact=1;
   for(int i=1;i<=n;i++)
   {
       fact=fact*i;
   }
   cout<<"The factorial of the number is "<<fact;
   return 0;
}