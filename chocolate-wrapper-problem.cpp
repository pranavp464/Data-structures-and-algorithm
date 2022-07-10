#include<iostream>
using namespace std;
int func(int num,int w,int t)
{
    if(w<4){
        
    }
}
int main()
{
    int n;
    cout<<"Enter the amount of money you have";
    cin>>n;
    int extra =0;
    int tem1 = 2 % 3;
    cout<<tem1;
    extra = n/3;
    int tolcok = n + extra;
    cout<<extra;
     int extra1;
    while(extra > 0) {
        int temp =0;
        extra1 = (int)extra % 3;
        
        if((int)extra / 3 != 0) {
            extra = extra1;
        }
            
        if (extra1 > 0)
        {
            temp++;
           
        }
        tolcok = tolcok + temp;
        cout<<extra;
        if (extra + tem1 >=3)
           continue;
        if(extra1 == extra)
           break;
        
        
    }
    cout<<"The number of chocolates you can get "<<tolcok;
}