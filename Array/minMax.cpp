#include<iostream>
#include<climits>
using namespace std;

int getMax(int arr[], int size)
{
    int max = INT8_MIN;
    for(int i = 0; i<size; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    // cout<<"The max number in array is "<<max<<endl;
    return max;
}


int getMin(int arr[], int size)
{
    int mini = INT_MAX;

    for(int i=0; i<size; i++)
    {
        // if(arr[i]< min)
        // {
        //     min=arr[i];
        // }
        mini = min(mini, arr[i]);
    }
    return mini;
}

int main()
{
    cout<<"Enter the sizze of Array "<<endl;
    int size;
    cin>>size;
    int arr[15];
    
    for(int i=0 ; i<size; i++)
    {
        cout<<"Enter the value of array "<<i+1<<endl;
        cin>>arr[i];
    }

   cout<<"The max number in given array is  "<< getMax(arr, size)<<endl;
   cout<<"The min number in given array is  "<< getMin(arr, size)<<endl;


    

    
}