#include<iostream>
using namespace std;

int main()
{
    // // 1st way to initialize an 2d array 
    // int arr[3][3] = {1,2,3,4,5,6,7,8,9};


    // //  2nd way to initialize the 2d Array
    // int arr[3][3] = {{1,2,3,}, {1,2,3,}, {1,2,3,}};


    // by user input 

    // int arr[3][3];
    // cout<<"Enter the number of rows and columns: ";
    // cin>>arr[0][0]>>arr[0][1]>>arr[0][2];
    // cin>>arr[1][0]>>arr[1][1]>>arr[1][2];
    // cin>>arr[2][0]>>arr[2][1]>>arr[2][2];

    // cout<<arr[0][0]<<arr[0][1]<<arr[0][2]<<endl;
    // cout<<arr[1][0]<<arr[1][1]<<arr[1][2]<<endl;
    // cout<<arr[2][0]<<arr[2][1]<<arr[2][2]<<endl;

    int arr[10][10];
    int row,col;
    cout<<"Enter the number of rows and columns: ";
    cin>>row>>col;

    // for input 2d array by user 
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<"Enter the element at row "<<i+1<<" and column "<<j+1<<": ";
            cin>>arr[i][j];
        }
    }

    // for output of the array 
     
     for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    


    
}