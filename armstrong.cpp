#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    int originalN=n;
    while(n>0)
    {
        int lastdigit=n%10;
        sum+=pow(lastdigit,3);
        n=n/10;

    }
    if(originalN==sum)
    {
        cout<<"Armstrong Number"<<endl;
    }
    else
    {
        cout<<"Not a Armstrong number"<<endl;
    }
}