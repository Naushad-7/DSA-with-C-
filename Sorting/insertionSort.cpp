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
void insertionSort(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while(j>=0)
        {
            if(arr[j] > temp)
            {
            arr[j+1] = arr[j];
            }
            else
            {
                break;
            }

        }
        arr[j+1] = temp;
    }
}


int main()
{
    int arr[10];
    int n;
    cout<<"Please enter the size of array =  " ;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Please enter the element of an Array "<<i+1<<" = ";
        cin>>arr[i];
    }

    cout<<"The Array before Sorted "<<endl;
    printArray(arr, n);

    cout<<"The Array after the sorted "<<endl;
    insertionSort(arr, n);
    printArray(arr, n);

}