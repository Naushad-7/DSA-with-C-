#include<bits/stdc++.h>
using namespace std;

int wavePrint(int arr[][3], int nRows, int mCols)
{
    int ans;

    for(int col=0; col<mCols; col++)
    {
        if(col&1)
        {
            for(int row=nRows-1; row>=0; row--)
            {
                ans = arr[row][col];
            }
        }
        else
        {
            for(int row=0; row<nRows; row++)
            {
                ans = arr[row][col];
            }
        }
    }
    return ans;    
}

void printArray(int arr[][3], int row, int col)
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

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> arr[i][j];
        }
    }

    printArray(arr,3,3);

    cout<<"Array printed in wave form "<<endl;

   cout<< wavePrint(arr,3,3);

}