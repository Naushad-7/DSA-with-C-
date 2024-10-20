#include<iostream>
using namespace std;


                         //  Write a program to print the nth term of the number in the A.P Arithmetic

// int nThterm(int a)
// {
//     int ans=(3*a)+7;
//     return ans;
// }

// int main()
// {
//     int n;
//     cin>>n;

//     cout<<nThterm(n);

// }



                         // Write a program to find the toatal no of the set bits in a given output.


int setBits(int n, int m)
{
    int count=0;
    while(n !=0 || m !=0 )
    {
        count +=n&1;
        count +=m&1;
        n>>=1;
        m>>=1;

    }
    return count;
}


int main()
{
    int n,m;
    cin>>n>>m;

    int ans=setBits(n,m);
    cout<<ans;
    return 0;
}