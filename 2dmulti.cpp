#include<iostream>
using namespace std;
int main()
{
   int r,c,r2;
   cout<<"Enter the number of rows and columns";
   cin>>r>>c>>r2;
   int a1[r][c],a2[c][r2];
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++){
       cin>>a1[i][j];
       }
   }
   for(int i=0;i<c;i++)
   {
       for(int j=0;j<r2;j++){
       cin>>a2[i][j];
       }
   }
   int ans[r][r2];
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<r2;j++){
       ans[i][j]=0;
       }
   }
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<r2;j++)
       {
           for(int k=0;k<c;k++){
           ans[i][j] += a1[i][k] * a2[k][j];
           }
       }
   }
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<r2;j++){
       cout<<ans[i][j]<<" ";
       }
       cout<<endl;
       
   }
   return 0;
}