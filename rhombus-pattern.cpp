#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"please enter the length of rhombus   :";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
        cout<<" ";
        }
        for(int j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}