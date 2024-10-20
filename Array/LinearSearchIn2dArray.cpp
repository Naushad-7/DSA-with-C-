#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[][3], int key, int i, int j)
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            if(arr[i][j] == key)
            {
                return 1;
            }
        }
    }
    return 0;
}

void printArray(int arr[][3], int i, int j)
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }
}

int main()
{
    int arr[3][3];
    cout<<"Enter the element of Array "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }

    printArray(arr, 3,3);
    int key;
    cout<<"Please enter the key  that u want to find in the Array = ";
    cin>>key;

    
    bool found = linearSearch(arr, key, 3, 3);

    if(found)
    {
        cout<<"Key is present in the array ";
    }
    else 
    {
        cout<<"Key is no Present in the array ";
    }

     return 0;
}