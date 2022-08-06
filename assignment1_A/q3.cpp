/*Write a program to find sum of every row and every column in a two-dimensional 
array */
#include<iostream>
using namespace std;

int main()
{int sumRow,sumColumn;
    int a[3][3] = { {1,2,3},
                    {4,5,6},
                    {7,8,9} };
    for(int i=0;i<3;i++)
    {
        sumRow=0;
        for(int j=0;j<3;j++)
        {
            sumRow+=a[i][j];
        }
        cout<<"Sum of row "<<i+1<<" is "<<sumRow<<endl;
    }
    for(int i=0;i<3;i++)
    {
        sumColumn=0;
        for(int j=0;j<3;j++)
        {
            sumColumn+=a[j][i];
        }
        cout<<"Sum of column "<<i+1<<" is "<<sumColumn<<endl;
    }
    return 0;
}