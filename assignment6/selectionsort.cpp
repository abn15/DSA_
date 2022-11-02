#include<iostream>
using namespace std;
void selectionsort(int A[], int n){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[min]){
                min=j;
            }
        }
        //swap
        int temp=A[min];
        A[min]=A[i];
        A[i]=temp;
    }
    //printing the array
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}

int main()
{
    int A[5]={5,4,3,2,1};
    selectionsort(A,5);
    return 0;
}