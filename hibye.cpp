#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    bool flag=-1;
    while(a%3==0)
    {
        cout<<"hi"<<endl;
        if(a%5==0)
        {
            flag=1;
            cout<<"bye";  
        }
        a++;
    }
    if(flag)
    {
        cout<<"bye";

    }
    return 0; 
}