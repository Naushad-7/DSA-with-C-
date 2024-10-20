#include<iostream>
using namespace std;

/*Function to left rotate arr[] of size n by d*/
void Rotate(int arr[], int d, int n)
{
    int p = 1;
    while (p <= d) {
        int last = arr[0];
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = last;
        p++;
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
    int size;
    cout<<"Please enter the size of array =";
    cin>>size;
    for(int i=0; i<size; i++)
    {
        cout<<"Please enter the element of an Array "<<i+1<<" = ";
        cin>>arr[i];
    }
    int key;
    cout<<"Please enter at what place u want to rotate your Array = ";
    cin>>key;

    cout<<"The Array enter  by You is = ";
    printArray(arr, size);

    cout<<"Array after the rotate is = ";
    Rotate(arr, size, key);
    printArray(arr, size);
}