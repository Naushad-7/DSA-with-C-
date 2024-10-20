#include<iostream>
#include<cstdio>
using namespace std;

// Function to find the maximum sum of a Sub Array in the given Array;

int maxSubArraySum(int arr[], int size)
{
    // Here we are creating  the variable maxSum which calculate the maximum sum of the Array
    // And we are initailizing the variable with the minimum integers value ;
    int maxSum = INT32_MIN;

    /*  
        Here are again taking a variable that variable will calculate the sum of current 
        sub Array which present in the Array;
    */
    int sum = 0;
    for(int i = 0; i < size; i++)
    {

        /*
            Here we are calculating the sum of current sub Array;
        */
        sum += arr[i];
        /*
            Here we are calculating the maximum sum of the Array;
        */
        maxSum = max(maxSum, sum);

        /*
            Here we are calculating the sum of the sub Array;

            here we are taking max value zero because if the value of 
            sum of currrent sub Array will be in negative it will become 
            zero and it start again with zero;
        */

        sum = max(sum, 0);
    }
    return maxSum;
}



void printArray(int arr[], int size)
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
    cout<<"Enter the sizze of Array =  ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element of Array" <<i+1<<" =  ";
        cin>>arr[i];
    }
    cout<<"The Array Enter by you is = ";
    printArray(arr, n);
    cout<<"Maximum Subarray Sum = "<<maxSubArraySum(arr, n)<<endl;

}