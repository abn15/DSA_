/*) Design the logic to remove the duplicate elements from an Array and after the
deletion the array should contain the uniquee elements*/
#include<iostream>
using namespace std;
int main()
{ cout<<"Enter the number of element in your array"<<endl;
int n;
int arr[n];
cout<<"Enter the elements in your array"<<endl;
//inputing the array
for(int i=0;i<n;i++)
{   cout<<"Enter the element at postion"<<" "<<i<<endl;
    cin>>arr[i];}
//printing the array 
cout<<"The array is"<<endl;
for(int i=0;i<n;i++)
{cout<<arr[i]<<" ";}
cout<<endl;
//removing the duplicate elements
int flag=0;
for(int i=0;i<s-flag;i++)
{
    for(int j=i+1;j<s-count;j++)
    {
        if(arr[i]==arr[j])
        {
            for(int i=j;i<s-flag;k++)
            {
                arr[i]=arr[i+1];
            }
            flag++;
        }
    }
}


//printing array after removing the duplicate elements
cout<<"The array after removing the duplicate elements"<<endl;
for(int i=0;i<s-flag;i++)
{cout<<arr[i]<<" ";}

    
    return 0;
}