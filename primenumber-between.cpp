#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int num){
    for(int c=2;c<num;c++){
        if(num%c==0)
        {
            return false;
        }
    }
    return true;
}
int main(){
    cout<<"please enter the numbers to find prime number between them";
    int a,b;
    cin>>a>>b;
    
    for(int i=a;i<=b;i++)
    {
        if(isprime(i))
        {
            cout<<i<<endl;
        }
    }
    return 0;
} 