#include<iostream>
using namespace std;


int getSum(int arr[], int size)
{
    int sum=0;
    for(int i=0; i<size; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int main()
{
    int arr[10];
    int size;
    cout<<"Please enter the size of array "<<endl;
    cin>>size;
    for(int i=0; i<size; i++)
    {
        cout<<"Please enter the element of an Array "<<i+1<<endl;
        cin>>arr[i];
    }

    cout<<"The sum of the total number given in the array is = " <<getSum(arr, size)<<endl;

}