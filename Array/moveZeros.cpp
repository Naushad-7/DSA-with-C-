#include<iostream>
using namespace std;

void moveZeros(int arr[], int size)
{
    int i = 0; /* here it denotes the 1st index and we consider it as nonZEro*/
    for(int j = 0; j<size; j++)
    {
        if(arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            i++;
        }
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
    int arr[10];
    int n;
    cout<<"Please enter the size of array "<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Please enter the element of an Array "<<i+1<<endl;
        cin>>arr[i];
    }

    cout<<"The Array is before "<<endl;
    printArray(arr, n);

    cout<<"The Array is after moving zeros "<<endl;
    moveZeros(arr, n);
    printArray(arr, n);
}