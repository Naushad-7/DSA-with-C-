#include<iostream>
using namespace  std;

void bubbleSort(int arr[], int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                // temp=arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=temp;
                swap(arr[j],arr[j+1]);

            }
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[10];
    int n;
    cout << "Enter the size of the Array : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element of the Array : ";
        cin >> arr[i];
    }

    cout << "Array  before the sorting are " << endl;
    printArray(arr, n);

    cout << "Array  after the sorting are " << endl;
    bubbleSort(arr, n);
    printArray(arr, n);
}