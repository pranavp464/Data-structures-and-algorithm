#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the number of rows in array  :";
    cin>>n;
    cout<<"enter the number of columns in array  :";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"the matrix is "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    int x;
    cout<<"please enter the number you want to search ";
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==x){
                    cout<<i<<"  "<<j<<"  ";
                    flag=true;
                }
            }
    }
    if(flag){
        cout<< " element found on the above co -ordinates";
    }
    else{
        cout<<"The element is not found in the array";
    }
    return 0;

    
}