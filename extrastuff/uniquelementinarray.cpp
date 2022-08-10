#include<iostream>
using namespace std;

int FindUniqueElementInArray(int arr[], int size)
{
    int i, j, k, temp;
    for (i = 0; i < size; i++)
    {
        ans=ans^arr[i]; //helps in eliminating duplicates as xor of same number is 0 and xor of different number and 0 is 1
    }
    return ans;
}

int main()
{
    
    return 0;
}