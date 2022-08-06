/*Write a program to find a saddle point in a two-dimensional array. A saddle point in a 
numerical array is a number that is larger than or equal to every number in its column, 
and smaller than or equal to every number in its row*/
#include<iostream>
using namespace std;

int main()
{
   int i,j,m,n,a[m][n],saddlePoint=0;
   cout<<"Enter the number of rows and columns of the array: ";
   cin>>m>>n;
   //taking input for the matrix
   for(i=0;i<m;i++){
         for(j=0;j<n;j++){
              cin>>a[i][j];
         }
   }

    //finding the saddle point
    for(i=0;i<m;i++){
         for(j=0;j<n;j++){
              if(a[i][j]>=a[i][0] && a[i][j]<=a[i][n-1]){
                   if(a[i][j]>=a[0][j] && a[i][j]<=a[m-1][j]){
                        cout<<"Saddle point is: "<<a[i][j]<<endl;
                        return 0;
                   }
              }
         }
    }
    return 0;
}