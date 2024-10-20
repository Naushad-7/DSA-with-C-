#include<iostream>
using namespace std;

bool isPerfect(int n)
{
    int sum=1;

    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    
    if(sum==n)
    {
        return true;
    }
    return false;
}

int main()
{
    // int n;
    // cin>>n;

    for(int n=2; n<1000; n++)
    {
        if(isPerfect(n)){
        cout<<n<<" = is a perfect number "<<endl;
        }
    }
}
