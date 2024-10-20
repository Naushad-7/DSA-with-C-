#include<iostream>
using namespace std;
// void reverseArray(int arr[], int n)
// {
//     int start=0;
//     int next=start+1;

//     while(start<=next)
//     {
//         swap(arr[start], arr[next]);
//         start +=2;
//     }
// }

void reverseArray(int arr[], int n)
{
   int i=0;
   int j=n-1;
   while(i<j)
   {
       int temp=arr[i];
        arr[i]=arr[j];
         arr[j]=temp;

         i += 2;
         j -= 2;
        

   }
}

void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

int main()
{
    int arr[6]={6,7,4,3,9,11};
    int arr2[5]={5,6,13,15,17};

    reverseArray(arr, 6);
    reverseArray(arr2, 5);

    printArray(arr, 6);
    printArray(arr2, 5);

    
}