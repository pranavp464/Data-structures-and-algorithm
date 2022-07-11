#include<iostream>
using namespace std;
int search(int arr[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
         if(arr[i]==key)
         {
             return i;
         }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of elements is array";
    cin>>n ;

    int arr[n];
    cout<<"Enter the elements in arraay";
    for( int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"please enter the key"<<endl;
    cin>>key;
    cout<<search(arr,n,key)<<endl;
    return 0;
}