#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number of rows and columns";
    cin>>n>>m;
    cout<<"Start printing the elements of the array";
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int rstart=0,rend=n-1,cstart=0,cend=m-1;
    while(rstart<=rend && cstart<=cend)
    {
        //for rowstart
        for(int col=cstart;col<=cend;col++)
        {
            cout<<arr[rstart][col]<<"  ";
        }
        rstart++;
        //for last column
        for(int row=rstart;row<=rend;row++)
        {
            cout<<arr[row][cend]<<"  ";
        }
        cend--;
        //for last row
        for(int col=cend;col>=cstart;col--)
        {
            cout<<arr[rend][col]<<"  ";
        }
        rend--;
        for(int row=rend;row>=rstart;row--)
        {
            cout<<arr[row][cstart]<<"  ";
        }
        cstart++;
    }
    return 0;

}