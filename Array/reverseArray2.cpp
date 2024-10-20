#include<iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int start=0;
    int end=size-1;

    while(start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
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
    int size;
    cout<<"Enter the size of Array = ";
    cin>>size;
    int i;
    for(i=0; i<size; i++)
    {
        cout<<"Please enter the element of an Array "<<i+1<<" = ";
        cin>>arr[i];
    }

    cout<<"The array element before the reverse "<<endl;
    printArray(arr, size);

    cout<<"The array element after the reverse "<<endl;

    reverseArray(arr,size);

    printArray(arr,size);
}