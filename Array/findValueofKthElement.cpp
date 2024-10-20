#include<iostream>
using namespace std;

// Find the kth index in the rotated array 


// function to find the pivot element in the array :

int pivotElement(int arr[], int size)
{
    int s=0; 
    int e=size-1;
    int mid= s + (e-s)/2;

    while(s < e)   
    {
        // here we comparing every element of mid to arr[0] or if the mid is 
        // greater than arr[0] then we increment the start index then again 
        // we checking the new start point.
        if(arr[mid] >=  arr[0])
        {
            s = mid + 1;
        }
        else
        {
            // here we are assigning the value of the end to mid that if we do e = mid-1 then
            // it again it goes to the left side of the mid that is not good approach
            e = mid;
        }

        // here we are again updating the value of Array and we will find the mid again.

        mid = s + (e - s)/2;
    }

    return s;
}

int binarySearch(int arr[], int start, int end, int key)
{
    int s=start;
    int e=end;

    int mid = s + (e - s)/2;

    while(s <= e)
    {
        // here we are checking condition that if the mid = key then ans if key and return that key;
        if(arr[mid] == key)
        {
            return mid;
        }
        // here we are checking condition that if the mid < key then we checking our key in the second part 
        // of the array for that we just have to change the start point of the array ;
         else if(arr[mid] < key)
         {
            s = mid + 1;
         }
        //  Here we are checking the condition that if the arr[mid] > key then we check our key in the 1st part
        // of the array for thet we just change the end point of the array;
         else
         {
            e = mid - 1;
         }

        //  Here updating the value of mid to find the key value ;

         mid = s + (e - s)/2;

    }
    // if the value is not in the array then array is not present in the array;
    return -1;
}
int main()
{
    int arr[10];
    int n;
    cout<<"Please enter the size of  array = ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the element of array = "<<i+1<<" = ";
        cin>>arr[i];
    }

    int key;
    cout<<"Please enter the value of that  u want to find = ";
    cin>>key;


    int pivot= pivotElement(arr, n);

    if(key >= arr[pivot] && key <= arr[n-1])
    {
        cout<<"in the second part "<<endl;
        cout<<"The value of array that u want to find is on the index no =  ";
        // Here we are getting ans or key by giving the Array, start point= pivot, end= n-1 and key;
        cout<<binarySearch(arr, pivot, n-1, key);
    }
    else
    {
        cout<<"In the 1st part "<<endl;
        cout<<"The value of array that u want to find is on the index no =  ";
        cout<<binarySearch(arr, 0, pivot-1, key);
    }

    return 0;

}