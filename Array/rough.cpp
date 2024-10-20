// #include<iostream>
// using namespace std;

// void printArray(int arr[], int size)
// {
//     for(int i=0; i<size;  i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void linearSearch(int arr[], int size, int key)
// {
//     for(int i=0; i<size; i++)
//     {
//         if(key==arr[i])
//         {
//             cout<<"The key enter by u is present at the locatio no = "<<i<<endl;
//         }
//     }
// }
// int main()
// {
//     int arr[20];
//     int n;
//     cout<<"Plese enter the size of the Array = ";
//     cin>>n;

//     for(int i=0; i<n; i++)
//     {
//         cout<<"Please enter the element of an Array "<<i+1<<" = ";
//         cin>>arr[i];
//     }

//     cout<<"Array Enter by You is  "<<endl;
//     printArray(arr, n);


//     int key;
//     cout<<"Please enter the key that u want to find in the Array = ";
//     cin>>key;

//     linearSearch(arr, n, key);

     
// }




#include<iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int s=0;
    int e = size - 1;
    while(s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[20];
    int n;
    cout<<"Plese enter the size of the Array = ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cout<<"Please enter the element of an Array "<<i+1<<" = ";
        cin>>arr[i];
    }

    cout<<"Array Enter by You is  "<<endl;
    printArray(arr, n);

    cout<<"Array after the sorting are "<<endl;
    reverseArray(arr, n);
    printArray(arr, n);

}