#include<iostream>
using namespace std;

void mergeArray(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0, k = 0;

    // here we are using while loop to check the condition for the travesal of the Array
    // IN this loop if any of the condition did not match then it comeout from the loop;

    
    while(i < n && j < m)
    {
        // Here we are comparing the every element of the Array for and if the  condition
        // match then we are adding the value to the third(3) Array;


        if(arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;

        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }


    // In case of the above condition is not match then we are print the all element
    // of the third array and the remaining elements of the first array;

    while(i < n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    
    // In case of the above condition is not match then we are print the all element
    // of the third array and the remaining elements of the second array;

    while(j < m)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

// for printing the Array;
void printArray(int ans[], int size)
{
    for(int i = 0; i<size; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

// drive code;

int main()
{
    int arr1[6] = {4,7,5,9,1,8};
    int arr2[3] = {2,3,6};

    int arr3[9] = {0};

    cout<<"Array after merging " <<endl;
    mergeArray(arr1, 6, arr2, 3, arr3);
    printArray(arr3, 9);
    return 0;
}



                               /*Another Approach*/

// #include<iostream>
// using namespace std;

// void mergeArray(int arr1[], int n, int arr2[], int m)
// {
//     int i = n-1;
//     int j = m-1;
//     int k= n+m-1;

//     while(i >= 0 && j >= 0)
//     {
//         if(arr1[i] > arr2[j])
//         {
//             arr1[k--] = arr1[i--];
//         }
//         else
//         {
//             arr1[k--] = arr2[j--];
//         }
//     }

//     while(j >= 0)
//     {
//         arr1[k--] = arr2[j--];
//     }

//     // while(i >= 0)
//     // {
//     //     arr1[k--] = arr1[i--];
//     // }
// }

// void printArray(int  ans[], int size)
// {
//     for(int i = 0; i<size; i++)
//     {
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
// }

// int main()
// {
//     int arr1[6]= {1,2,3,0,0,0};
//     int arr2[3] =  {2,5,6};

//     mergeArray(arr1, 6, arr2, 3 );
//     printArray(arr1, 6);
// }