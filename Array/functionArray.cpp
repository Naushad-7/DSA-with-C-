#include<iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        cout<<" Value  at index no  "<<i<< "=" <<arr[i]<<endl;
    }

    cout<<"Printing Is DONE "<<endl;
}

int main()
{
    
    cout<<"Please enter size of First array  = ";
    int first[15];
    int size;
    cin>>size;

    printArray(first, size);

    cout<<"Please enter size of Second array = ";
    int second[10];
    int size2;
    cin>>size2;
    
    printArray(second, size2);
    
    
    cout<<"Please enter size of Third array";
    int third[20];
    int size3;
    cin>>size3;

    printArray(third, size3);
}



    