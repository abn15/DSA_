//https://youtu.be/imqr13aIBAY
#include<iostream>
using namespace std;
void countsort(int A[],int n){
    //find maximum element
    int k;
    for(int i=0;i<n;i++){
        if(A[i]>k){
            k=A[i];
        }
    }
    //create a count array
    int count[10]={0};
    for(int i=0;i<n;i++){
        count[A[i]]++; //this will store the count of every element from the original array to the count array
    }
    //modifying the count array
    for(int i=1;i<=k;i++){
        count[i]=count[i]+count[i-1]; //adding the previous element to the current element
    }
    //creating a new array
    int output[n];
    for(int i=n;i>=0;i--){
        output[--count[A[i]]]=A[i]; //decrementing the count array and storing the element in the output array
    }
//store the output array to the original array
for(int i=0;i<n;i++){
    A[i]=output[i];
}


}
int main()
{
    int A[]={1,3,2,3,4,1,6,4,3};
    countsort(A,9);
    for(int i=0;i<9;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}