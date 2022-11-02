//sorting start from end by the end of every iteration the maximum element reaches the end
#include<iostream>
using namespace std;
void bubblesort(int A[],int n){
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(A[j]>A[j+1]){
            //swap
            int temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
        }
    }
}
//printing the array
for(int i=0;i<n;i++){
    cout<<A[i]<<" ";
}
}


int main()
{
    int A[]={5,4,3,2,1};
    bubblesort(A,5);
    return 0;
}