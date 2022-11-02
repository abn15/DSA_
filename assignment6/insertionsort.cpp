#include<iostream>
using namespace std;
void insertionsort(int A[],int n){
    for(int i=0;i<n;i++){
        int current=A[i];
        int j=i-1;
        while(j>=0 && A[j]>current){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=current;
    }
    //printing the array
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}

int main()
{
    int A[5]={5,4,3,2,1};   
    insertionsort(A,5);
    return 0;
}