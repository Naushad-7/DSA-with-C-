#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[20];
    int size;
    cout<<"Please enter the size of array "<<endl;
    cin>>size;
    int i;
    for(i=0; i<size; i++)
    {
        cout<<"Enter the vlaue of array "<<i<<" = ";
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key that u want to search " <<endl;
    cin>>key;

    bool searchMatch = linearSearch(arr, size, key);

    if(searchMatch)
    {
        cout<<"The given key is found at the index "<<endl;
    }
    else{
        cout<<"The given key is not found "<<endl;
    }

    return 0;

}