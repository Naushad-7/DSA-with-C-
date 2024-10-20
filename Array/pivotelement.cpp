#include<iostream>
using namespace std;

int getPivot(int arr[], int size)
{
    int s=0;
    int e=size-1;
    int mid = s + (e - s)/2;

    while(s < e)
    {
        if(arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e - s)/2;
    }
    return s;
}

int main()
{
    int arr[7]= {8,10,17,19,21,1,3};
    
    cout<<"The pivot element in the given array is "<<getPivot(arr, 7);
}
