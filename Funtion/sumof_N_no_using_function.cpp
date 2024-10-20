#include<iostream>
using namespace std;

int sumOfn(int n)
{
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<sumOfn(n)<<endl;
    sumOfn(n);
    return 0;
}