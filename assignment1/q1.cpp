/*1) Develop a Menu driven program to demonstrate the following operations of
Arrays ——MENU——- 1.CREATE
2.DISPLAY
3.INSERT
4.DELETE
5.SEARCH
6.EXIT */
#include<iostream>
using namespace std;

int main()

{ int n;
    int A[n],pos;
    
    
      cout<<"1.CREATE 2.DISPLAY 3.INSERT 4.DELETE 5.SEARCH 6.EXIT"<<endl;
    int choice;
    cin>>choice;
    switch (choice){
    
    
    case 1:
        cout<<"CREATE YOUR ARRAY"<<endl;
        int i;
        cout<<"Enter the size of array"<<endl;
        cin>>n;
        cout<<"Enter the elements of array"<<endl;
        for(i=0;i<n;i++)
        {
            cin>>A[i];
        }
        break;

    case 2:
        cout<<"DISPLAY YOUR ARRAY"<<endl;
        
        if(n==0)
        {
            cout<<"Array is empty"<<endl;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                cout<<A[i]<<endl;
            }
        }

        case 3:
        cout<<"INSERT YOUR ARRAY"<<endl;
        
        cout<<"enter the position"<<endl;
        cin>>pos;
        cout<<"enter the element"<<endl;
        cin>>A[pos];
        for(i=n-1;i>=pos;i--)
        {
            A[i+1]=A[i];
        }
        A[pos]=A[pos];
        n=n+1;
        for(i=0;i<n;i++)
        {
            cout<<A[i]<<endl;
        }

        case 4:
        cout<<"DELETE A ELEMENT"<<endl;
        
        cout<<"enter the position"<<endl;
        cin>>pos;
        for(i=pos;i<n;i++)
        {
            A[i]=A[i+1];
        }
        n=n-1;
        for(i=0;i<n;i++)
        {
            cout<<A[i]<<endl;
        }

        case 5:
        cout<<"SEARCH A ELEMENT"<<endl;
        
        cout<<"enter the element"<<endl;
        cin>>A[n];
        for(i=0;i<n;i++)
        {
            if(A[i]==A[n])
            {
                cout<<"element found at position"<<i<<endl;
            }
        }

        case 6:
        cout<<"EXIT"<<endl;
        break;

    
    default:
        break;}
    

    
    return 0;}