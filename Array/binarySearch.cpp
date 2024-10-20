#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start=0; 
    int end=size-1;

    int mid = start + (end - start)/2;

    while(start<=end)
    {
        if(key == arr[mid])
        {
            return mid;
        }

        if(key > arr[mid])
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }

        mid = start + (end - start)/2;
    }

    return -1;
}
void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[20];
    int n;
    cout<<"Please Enter the  size of Array = ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Please enter the element of an Array "<<i+1<<" = ";
        cin>>arr[i];
    }
    cout<<"The Array enter by You is = "<<endl;
    printArray(arr, n);

    int key;
    cout<<"Please enter the key  that u want to find in the Array = ";
    cin>>key;
    int index = binarySearch(arr, n, key);
    if(index == -1)
    {
        cout<<"Key not found in the Array"<<endl;
    }
    else
    {
        cout<<"Key found in the Array "<<endl;
    }

    return 0;
}