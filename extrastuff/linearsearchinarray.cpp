#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main()
{    int key;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    //finding whether 1 is present in the array or not
    cout<<"enter the key to be searched: ";
    cin>>key;

    bool found= search(arr,10,key);

    if(found){
        cout<<"key found";
    }
    else{
        cout<<"key not found";
    }
    return 0;
}


//transposition in linear search
//improvement of linear search
//linear search is O(n)
//transposition is O(n^2)
//transposition is used when we have to search for a key in a sorted array  and the key is not present in the array
// just swap the key in A[0] if its present so that when u search for it again it will be found in the first position.