#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    int prev=sum(n-1);
    return n + prev;
}

int main()
{
   int n;
   cout<<"Enter the number you want to add upto";
   cin>>n;
   cout<<sum(n);
   return 0;
}