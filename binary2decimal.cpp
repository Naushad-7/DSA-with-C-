// Write  a program to conver the binary number to decimal number;

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int ans=0;
    int i=0;
    while(n!=0)
    {
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<ans<<endl;

}
    // while(n != 0)
    // {
    //     int lastDigit = n % 10;
    //     ans = lastDigit*pow(2,i)+ans;
    //     n= n/10;
    //     i++;
    // }
    // cout<< ans<<endl;


// write a program to convert decimal number to the binary numbers

