#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
         cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortArray(int arr[], int size)
{
    int left=0; 
    int right=size-1;

    while(left<right)
    {
        while(arr[left] == 0 && left < right)
        {
            left++;
            
        }
            while(arr[right] == 1 && left < right)
            {
                right--;
            }

            if(left < right)
            {
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
    }
}

int main()
{
    int arr[20];
    int n;
    cout<<"please Enter the size of Array = ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Please enter the element of an Array "<<i+1<<" = ";
        cin>>arr[i];
    }

    cout<<"Array before the sorting are "<<endl;
    printArray(arr, n);

    cout<<"Array after the sorting are "<<endl;
    sortArray(arr, n);
    printArray(arr, n);
}