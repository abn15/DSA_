//finding the maximum term in the array till the i th index
#include<iostream>
using namespace std;

int main()
{
    int i,n;
    int arr[100];
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the element: ";
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        if(arr[0]<arr[i])
        arr[0]=arr[i];
        cout<<endl<<"Maximum term till: "<<i+1<<" index is: "<<arr[0];
        
    }

    return 0;
}