//QUICK SORT
#include<iostream>
using namespace std;
int partition(int A[], int p, int r){
    int pivot=A[r],temp;
    int i=p-1;
    for(int j=p;j<r;j++){
        if(A[j]<=pivot){
            i++;
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }
    temp=A[i+1];
    A[i+1]=A[r];
    A[r]=temp;
    return i+1;
}

void sort(int A[],int p,int r){
    if(p<r){
        int q=partition(A,p,r);
        sort(A,p,q-1);
        sort(A,q+1,r);
    }
}

int main()
{
    int n=6,A[n]={10,7,8,9,1,5},p=0,r=n-1;
    sort(A,p,r);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}