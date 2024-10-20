#include<iostream> 
using namespace std;

int printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// void reversePairArray(int arr[], int size)
// {
//     for(int i=0; i<size; i=i+2)
//     {
//         if(i+1<size)
//         {
//             swap(arr[i], arr[i+1]);
//         }
//     }
// }

void reversePairArray(int arr[], int size)
{
    for(int i=0; i<size; i=i+2)
    {
        if(i+1<size)
        {
            int temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }
}

int main()
{
    int arr[20];
    int size;
    cout<<"Please enter the size of array " <<endl;
    cin>>size;
    for(int i=0; i<size; i++)
    {
        cout<<"Please enter the element of an Array " <<i+1<<"= ";
        cin>>arr[i];
    }
    cout<<"The array element before the swap "<<endl;
    printArray(arr, size);
    cout<<"The array element after the swap "<<endl;
    reversePairArray(arr, size);
    printArray(arr, size);
}