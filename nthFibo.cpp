#include<iostream>
using namespace std;

int fibo(int n)
{
    int a=0;
    int b=1;
    int nextTerm;

    for(int i=1; i<=n; i++)
    {
        cout<<a<<" ";
        nextTerm=a+b;
        a=b;
        b=nextTerm;
    }
}

int fib(int n)
{


    if(n<=1)
    {
        return n;
        return fibo(n-1)+fibo(n-2);
    }
    // return a;
}


int main()
{
    int n;
    cin>>n;
    fibo(n);
    fib(n);
    
   return 0;
   
}