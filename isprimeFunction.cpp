#include<iostream>
using namespace std;

int isPrime(int n)
{
    bool isPrime = 1;

    for(int i=1; i<=n; i++)
    {
        if(n % i == 0)
        {
            isPrime = 0;
            break;
        }
        return 1;
    }
}

int main()
{
    int n;
    cin>>n;
    if(isPrime(n))
    {
        cout<<"The given number "<<n<<" is Prime number"<<endl;
    }
    else
    {
        cout<<"The given number "<<n<<" is not a Prime number"<<endl;
    }


}