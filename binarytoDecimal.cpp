#include<iostream>
using namespace std;

// int binaryToDecimal(int n)
// {
//     int ans=0;
//     int x=1;
//     while(n>0)
//     {
//         int y=n%10;
//         ans=ans+x*y;
//         x=x*2;
//         n/=10;

//     }
//     return ans;
// }

// int octalToDecimal(int n)
// {
//     int ans=0;
//     int x=1;
//     while(n>0)
//     {
//         int y=n%10;
//         ans+=x*y;
//         x*=8;
//         n/=10;
//     }
//     return ans;
// }

int hexaToDecimal(int n)
{
    int ans=0;
    int x=1;
    while(n>0)
    {
        int y=n%10;
        ans+=x*y;
        x*=16;
        n/=10;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    // cout<<binaryToDecimal(n)<<endl;
    // cout<<octalToDecimal(n)<<endl;
    cout<<hexaToDecimal(n)<<endl;
    return 0;
}