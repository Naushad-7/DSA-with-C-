#include <iostream>
using namespace std;

int main()
{
    int unit;
    cout << "Please enter the amount of unit that u consumed till now :";
    cin >> unit;
    float amount;

    switch (unit >= 50 && unit <= 100)
    {
    case 1:
        amount = unit * 5;
        cout<<" Your Electric bill amount is = ";
        cout << amount << endl;
        break;
    case 0:
        switch (unit >= 100 && unit <= 150)
        {
        case 1:
            amount = unit * 6;
            cout << " Your Electric bill amount is = ";
            cout << amount << endl;
            break;

        case 0:
            switch (unit >= 150 && unit <= 200)
            {
            case 1:
                amount = unit * 7.5;
            cout << " Your Electric bill amount is = ";
            cout << amount << endl;
            break;
        case 0:
            switch (unit >= 200 && unit <= 250)
            {
            case 1:
                amount = unit * 8;
                cout << " Your Electric bill amount is = ";
                cout << amount << endl;
                break;

            case 0:
                amount = unit * 9.5;
                cout << " Your Electric bill amount is = ";
                cout << amount << endl;
                break;
            }
            break;

            }
        }
        break;
    }
}