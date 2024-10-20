#include<iostream>
#include<math.h>
using namespace std;

int fibo( int n)
{
    int a=0;
    int b=1;
    int nextTerm;

    for(int i=1; i<=n; i++)
    {
        cout<<a<<" ";
            nextTerm=a+b;
            a= b;
            b=nextTerm;
    }
}

int main()
{
    int n;
    cin>>n;

    fibo(n);
    // int ans = fibo(n);
    // cout<<ans;
}

