#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Please enter the value of 'a' and 'b' " << endl;
    cin >> a >> b;

    switch (a > b)
    {
    case 1:
        cout << " 'a' is greater than 'b' ";
        break;
    case 0:
        switch (a < b)
        {
        case 1:
            cout << " 'b' is greater then 'a' ";
            break;

        default:
            cout << "Please enter the valid number ";
            break;
        }
        break;
    }
}