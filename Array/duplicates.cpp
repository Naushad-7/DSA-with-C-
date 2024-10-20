#include<iostream>
using namespace std;


bool findDuplicate(int arr[], int size)
{
    sort(arr.begin(), arr.end());

    for(int i=0; i<size; i++)
    {
        if(arr[i] == arr[i+1])
        {
            return true;
        }
    }

    return false;
}



/*  
    It is a two pointer approach 
    time complexity is O(n^2)
*/

// bool findDuplicate(int arr[], int size)
// {
//     for(int i = 0; i<size; i++)
//     {
//         for(int j=i+1; j<size; j++)
//         {
//             if(arr[i] == arr[j])
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

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
    cout<<"Please enter the size of array =  " ;
    cin>>n;

    for(int i = 0; i<n; i++)   
    {
        cout<<"Please enter the element of an Array "<<i+1<<" = ";
        cin>>arr[i];
    }

    cout<<"Array entered by you is = ";
    printArray(arr, n);
     
    bool found =  findDuplicate(arr, n);
    if(found)
    {
        cout<<"Duplicate Element is present in the array "<<endl;
    }
    else
    {
        cout<<"No duplicate element found in the array";
    }
    return 0;
}