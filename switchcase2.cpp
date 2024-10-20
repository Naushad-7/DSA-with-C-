#include <iostream>
using namespace std;

int main()
{
    float s1, s2, s3, s4, s5;

    cout << " Plese enter the marks of all subjects" << endl;
    cin >> s1 >> s2 >> s3 >> s4 >> s5;
    cout << " Shemshat total marks percentage are = ";

    float per;
    per = (s1 + s2 + s3 + s4 + s5) / 5;
    cout << per << endl;

    switch (per >= 90 && per <= 100)
    {
    case 1:
        cout << "Shemshat  Your grade is 'A++' "<<endl;
        cout<<" Shemshat U r most intelligent Student 🤩🤗 "<<endl;
        break;
    case 0:
        switch (per >= 80 && per <= 90)
        {
        case 1:
            cout << " Shemshat grade is 'B' ";
            break;
        case 0:
            switch (per >= 70 && per <= 80)
            {
            case 1:
                cout << "your grade is 'C' ";
                break;

            case 0:
                switch (per >= 60 && per <= 70)
                {
                case 1:
                    cout << "your grade is 'D' ";
                    break;
                case 0:

                    switch (per >= 50 && per <= 60)
                    {
                    case 1:
                        cout << "your grade is 'D' ";
                        break;
                    case 0:
                        cout << "your grade is 'F' ";
                        break;
                    }

                    break;
                }
                break;
            }
            break;
        }
        break;
    }

    cout<<"Naushad is Happy that u r his Frind 😁😁";
}
