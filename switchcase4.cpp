#include <iostream>
using namespace std;

int main()
{
    int totalMoney;
    cout << "Please Enter the Total amount that u have = ";
    cin >> totalMoney;
    // cout<<totalMoney<<endl;
    int n1, n20, n50, n100, n500, n2000;
    n1 = n20 = n50 = n100 = n500 = n2000 = 0;

    switch (totalMoney >= 2000)
    {
    case 1:
        n2000 = totalMoney / 2000;
        totalMoney -= n2000 * 2000;
        break;
    }

    switch (totalMoney >= 500)
    {
    case 1:
        n500 = totalMoney / 500;
        totalMoney -= n500 * 500;
        break;
    }
    switch (totalMoney >= 100)
    {
    case 1:
        n100 = totalMoney / 100;
        totalMoney -= n100 * 100;
        break;
    }

    switch (totalMoney >= 50)
    {
    case 1:
        n50 = totalMoney / 50;
        totalMoney -= n50 * 50;
        break;
    }

    switch (totalMoney >= 20)
    {
    case 1:
        n20 = totalMoney / 20;
        totalMoney -= n20 * 20;
        break;
    }

    switch (totalMoney >= 1)
    {
    case 1:
        n1 = totalMoney / 1;
        totalMoney -= n1 * 1;
        break;
    }

    cout << "You have 2000 rupees note = " << n2000 << endl;
    cout << "You have 500 rupees note = " << n500 << endl;
    cout << "You have 100 rupees note = " << n100 << endl;
    cout << "You have 50 rupees note = " << n50 << endl;
    cout << "You have 20 rupees note = " << n20 << endl;
    cout << "You have 1 rupees note = " << n1 << endl;
}