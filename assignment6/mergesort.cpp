//MERGE SORT
#include<iostream>
using namespace std;
void merge(int a[],int low,int mid,int high)
{
int i=low,j=mid+1,k=low,b[100];
while(i<=mid && j<=high)    

{   if(a[i]<a[j]){
    b[k]=a[i];
    i++;
    k++;
}
else{
    b[k]=a[j];
    j++;
    k++;
}
}
if(i>mid){
    while(j<=high){
        b[k]=a[j];
        j++;
        k++;
    }
}
else{
    while(i<=mid){
        b[k]=a[i];
        i++;
        k++;
    }
}
for(int k=low;k<=high;k++){
    a[k]=b[i];
}
//pritning the array
for(int i=0;i<10;i++){
    cout<<a[i]<<" ";
}
}

int main()
{int A[]={1,2,3,4,5,6,7,8,9,10};

merge(A,0,4,9);
    
    return 0;
}