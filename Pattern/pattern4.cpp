#include<iostream>
using namespace std;

                                           //Inverted patter using number 
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n+1-i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }


                                                //patter on the 1-0 format

// int main()
// {
//     int n;
//     cin>>n;

//     for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//             if((i+j)%2==0)
//             {
//                 cout<<" 1";
//             }
//             else
//             {
//                 cout<<" 0";
//             }
//         }
//         cout<<endl;
//     }
// }

                                           //Rhombus patter using star////////

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<=n-i; j++)
//         {
//             cout<<"  ";
//         }
//         for(int j=0; j<=n; j++)
//         {
//             cout<<" *";
//         }
//         cout<<endl;
//     }
// }



                                    //NUMBER PATTERN -2


// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<=n-i; j++)
//         {
//             cout<<"  ";
//         }

//         for(int j=1; j<=i; j++)
//         {
//             cout<<j<<"  ";
//         }
//         cout<<endl;
//     }
// }


//Rhombus patter from opposite side

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;

//     for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<=n+i; j++)
//         {
//             cout<<"  ";
//         }
//         for(int j=1; j<=n; j++)
//         {
//             cout<<" *";
//         }
//         cout<<endl;
//     }
// }


// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++)
//     {
//         int j;
//         for(j=1; j<=n-i; j++)
//         {
//             cout<<"  ";
//         }
//         int k=i;
//         for(; j<=n; j++)
//         {
//             cout<<k--<<" ";
//         }

//         k=2;
//         for(; j<=n+i-1; j++)
//         {
//             cout<<k++<<" ";
//         }
//         cout<<endl;
//     }
// }



                                    //star pattern

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    //   for(int i=n; i>=1; i--)
    // {
    //     for(int j=1; j<=n-i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=2*i-1; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    
}