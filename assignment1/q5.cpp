/*5) Implement the Binary search algorithm regarded as a fast search
algorithm with run-time complexity of Ο(log n) in comparison to the Linear
Search.*/
//note the input array should be sorted -_-
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the number of elements in your array:"<<endl;
    int p;
    cin>>p;
    int arr[p];
    //inputing the sorted array
    for(int i=0;i<p;i++)
    {
        cout<<"Enter the element at position"<<" "<<i<<endl;
        cin>>arr[i];
    }

    //ask the elment to be searched
    cout<<"Enter the element to be searched"<<endl;
    int key;
    cin>>key;



    //binary search
    int l,h;
    int mid=(l+h)/2;
    while(l>=h)
    { l=0;
      h=p;
        mid=(l+h)/2;
        if(arr[mid]==key)
        {
            cout<<"The element is found at position"<<" "<<mid<<endl;
            return 0;
        }
        else if(arr[mid]>key)
        {
            h=mid-1;
        }
        else if(arr[mid]<key)
        {
            l=mid+1;
        }
    }


    return 0;
}