#include<iostream>
#include<math.h>
using namespace std;

int power(int a, int b)
{
    int power= pow(a,b);
    return power;

}
int main()
{
    int x,y;
    cin>>x>>y;

    int ans = power(x,y);

    cout<<ans;
}