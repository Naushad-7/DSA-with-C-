#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
            swap(arr[minIndex], arr[i]);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[10];
    int n;
    cout << "Enter the size of the Array : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element of the Array : ";
        cin >> arr[i];
    }

    cout << "Array  before the sorting are " << endl;
    printArray(arr, n);

    cout << "Array  after the sorting are " << endl;
    selectionSort(arr, n);
    printArray(arr, n);
}