#include <iostream>
using namespace std;

int update(int a)
{
    // a=a/2;
    // a -= 5;
    int ans = a * a;
    // cout<<"Value of a in the update funtion " <<a<<endl;
    return ans;
}

int main()
{
    int b = 15;

    // update(a)

    a = update(b);
    cout << "Value of a is =: " << a << endl;
}