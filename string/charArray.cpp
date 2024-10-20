#include <bits\stdc++.h>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrom(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (toLowerCase(name[s]) != toLowerCase(name[e]))
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}

void reverseName(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[])
{
    int count = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "Please enter your name here = ";
    cin >> name;

    cout << "name is enter by You is = " << name << endl;
    cout << "length of name is = " << getLength(name);
    cout << endl;
    int len = getLength(name);
    reverseName(name, len);
    cout << "your name after reverse = " << name << endl;
    cout << "The given string is palindrom = " << checkPalindrom(name, len);
}