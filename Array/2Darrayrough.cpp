#include<iostream>
using namespace std;

// function for the sum of array in row or column wise;

void rowArraySum(int arr[][3], int i, int j)
{
    for(int i=0; i<3; i++)
    {
        int sum = 0;
        for(int j=0; j<3; j++)
        {
            // for column wise sum;
            sum = sum+arr[j][i];

            // for row wise sum;
            // sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int largestSum(int arr[][3], int i, int j)
{
    int maxSum = INT32_MIN;
    int rowIndex = 1;
    for(int i=0 ; i<3; i++)
    {
        int sum = 0;
        for(int j=0; j<3; j++)
        {
            sum += arr[i][j];
        }

        if(sum > maxSum )
        {
            maxSum = sum;
            rowIndex = i;
        }
    }
    cout<<"maximum sum is " <<maxSum;
    return rowIndex;
}

// function for printing 2D array;
void printArray(int arr[][3], int i, int j)
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr[3][3];

    // for input  2d array by user

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"2D array enter by u "<<endl;

    printArray(arr, 3,3);

    cout<<"sum of  the 2D array row wise : "<<endl;

    rowArraySum(arr, 3,3);


    int ans = largestSum(arr, 3,3);
    cout<<" maximum sum is present at the index no = "<<ans;
    return 0;
}