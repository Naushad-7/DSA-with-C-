// #include<iostream>
// using namespace std;

// int main()
// {
//     char ch;
//     cout<<"Enter a character: ";
//     cin>>ch;

//     if(ch>=65 && ch<=90)
//     {
//         cout<<"upper case"<<endl;
//     }
//     else if(ch>=97 && ch<=122)
//     {
//         cout<<"lower case ";

//     }
//     else{
//         cout<<"this is a number"<<endl;
//     }

// }

// #include<iostream>
// using namespace std;

// int main()
// {
// int n;
// cin>>n;

// int i = 1;

// while(i<=n)
// {
//     int j=1;
//     while(j<=n)

//     {
//         cout<<j<<" ";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

//     int n;
//     cin>>n;

//      int i =1;
//     //  int value =1;

//      while(i<=n)
//      {
//         int j = 1;
//         int value = i;
//         while(j <= i)
//         {
//             cout<<value<<" ";
//             value++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//      }

// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int i = 1;

//     while (i <= n)
//     {

//         int space = n - i;
//         while (space)
//         {
//             cout << " "<<" ";
//             space--;
//         }

//         int j = 1;
//         while (j <= i)
//         {
//             cout << "*"<<" ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        char start = 'A'+n-i;
        
        int j = 1;
        while(j <= i)
        {
            cout<<start<<" ";
            start++;
            j++;
        }
        cout<<endl;
        i++;
    }
}