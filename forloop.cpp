#include<iostream>
using namespace std;

int main()
{
    int n, i, sum=0;
    cout<<"Enter the value of n ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        cout<<"The"<<n<<"natural number is "<<i <<endl;
        sum=sum+i;
    }
        cout<<"The sum of " << n <<" natural number is "<<sum<<endl;
}