#include<iostream>
using namespace std;

int findPeak(int arr[], int n)
{
   if(n==1)
    return 0;
   if(arr[0] >= arr[1])
    return 0;
   if(arr[n-1] >= arr[n+1])
    return n-1;

    for(int i=1; i < n; i++)
    {
        if(arr[i] >= arr[n-1] && arr[i] >= arr[n+1])
        return i;
    }
}

int main()
{
    int arr[]={1,8,7,9,15,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    // int n;
    cout<<"The peak value in the array is "<<findPeak(arr,n);
    return 0;

}