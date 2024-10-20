#include <bits/stdc++.h>
using namespace std;

void sumRow(int arr[][3], int i, int j)
{
    for (int j = 0; j < 3; j++)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += arr[j][i];
        }
        cout << sum << " ";
    }
    cout << endl;
}

void largestSum(int arr[][3], int i, int j)
{
    int largest = INT32_MIN;
    int numIndex = -1;
    for (int j = 0; j < 3; j++)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += arr[j][i];
        }
        if (sum > largest)
        {
            largest = sum;
            numIndex = j;
        }

    }
    cout << largest << "is the largest sum at the index no = " << numIndex << endl;
}

void printArray(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3];
    cout << "Enter the element of Array " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    printArray(arr, 3, 3);

    cout << "sum of the 2D array row wise : ";

    sumRow(arr, 3, 3);

    largestSum(arr, 3, 3);

    return 0;
}