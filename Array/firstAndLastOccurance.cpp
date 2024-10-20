#include<iostream>
using namespace  std;

// Function to find the left most occurance 
int firstOccurance(int arr[], int size, int key)
{
    int s=0;
    int e=size-1;
    int ans = -1;

    int mid = s + (e - s)/2;

    while(s<=e)
    {
        if(arr[mid] == key)
        {
            // Here we are  comparing the every element of the Array for and if the  condition
            // is satisfiedd we are storing the element in the "Ans veriable" and we have to find 
            // the left most occurance of the key so we are going left side......;
            ans = mid;
            e = mid -1;
        }

        // And then again we are using binary search for the left array.........;

       else if(key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s)/2;
    }
    return ans;
}

int lastOccurance(int arr[], int size, int key)
{
    int s=0;
    int e=size-1;
    int ans = -1;

    int mid = s + (e - s)/2;

    while(s<=e)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }

       else if(key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s)/2;
    }
    return ans;
}

printArray(int arr[], int size)
{
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[20];
    int n;
    cout<<"Please enter the size of array = " ;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cout<<"Please enter the element of an Array "<<i<<" = ";
        cin>>arr[i];
    }

    int key;
    cout<<"Please enter the element to be searched  ";
    cin>>key;

    cout<<"The array Entered by you is = ";
    printArray(arr, n);

    cout<<"The first Occurance in the Array at the index No- "<<firstOccurance(arr, n, key)<<endl;
    
    cout<<"The last Occurance in the Array at the index No- "<<lastOccurance(arr, n, key);
}