#include<iostream>
using namespace std;
//half pryramid from the left side
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=n; i>=1; i--){
//         for(int j=1; j<=i; j++){
//         cout<<"* ";
//         }
//         cout<<endl;
//     }

// }

// half pyramid from the right side;

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=n-i){
                cout<<"  ";
            }
            else{
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}



//pyramid using numbers to each row and each row has  the same number ;

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<=i; j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }

//floyd's triangle patter

// int main()
// {
//     int n;
//     cin>>n;

//     int count=1;
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
// }


// butterfly patter using star

// int main()
// {
//     int n;
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<"* ";
//         }
//        int space= 2*n -  2*i;
//        for(int j=1; j<=space; j++){
//          cout<<"  ";
//        }
//        for(int j=1; j<=i; j++){
//         cout<<" *";
//        }
//        cout<<endl;
//     }

//      for(int i=n; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             cout<<"* ";
//         }
//        int space= 2*n -  2*i;
//        for(int j=1; j<=space; j++){
//          cout<<"  ";
//        }
//        for(int j=1; j<=i; j++){
//         cout<<" *";
//        }
//        cout<<endl;
//     }
// }