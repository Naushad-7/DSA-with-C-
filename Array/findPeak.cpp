#include<iostream>
using namespace std;


// funtion to find peak element...........

int findPeak(int arr[], int n)
{
    int s=0; 
    int e=n-1;
    int mid = s + (e - s)/2;

    while(s < e)
    {
        if(arr[mid] < arr[mid+1])
        {
            s = mid + 1; 
        }

        else
        {
            e = mid; 
        }

        mid = s + (e - s)/2;
    }

    return s;
}
int main()
{
    int arr[10];
    int size;
    cout<<"Please enter the size of array ";
    cin>>size;
    for(int i=0; i<size; i++)
    {
        cout<<"Please enter the element of an Array "<<i<<"= ";
        cin>>arr[i];
    }

    int peak = findPeak(arr, size);

    cout<<"The peak value in the Mountain Array at the index no s ";
    cout<<peak<<endl;
    return 0;
}