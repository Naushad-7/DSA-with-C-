#include<iostream>
using namespace std;

// function to check the unique element in the given array;

int findUniqueElement(int arr[], int size)
{
    int ans=0;
    for(int i=0; i<=size; i++)
    {
        // Here we used the XOR operation to find the unique element in the Array 
        // Here we basically XOR the array element of the i or same (n-1) element to find out unique in it.
        ans=ans^arr[i];
    }
    return ans;
}

int main()
{
    int arr[20];
    int n;
    cout<<"Enter the size of Array = ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cout<<"Enter the element of Array "<<i+1<<" ";
        cin>>arr[i];
    }

  cout<<  findUniqueElement(arr,n);
}