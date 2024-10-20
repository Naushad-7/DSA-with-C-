#include <bits/stdc++.h>
using namespace std;

bool valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }

    return 0;
}

char toLowerCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z') 
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool CheckPalindrom(string s)
{
    int start = 0;
    int end = s.length() - 1;

    while (start <= end)
    {
        if (s[start] != s[end])
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
        return 1;
    }
}

bool isPalindrom(string s)
{
    // if any non-Alpha numeric charactors remove them

    string temp = "";
    for (int j = 0; j < s.length(); j++)
    {
        if (valid(s[j]))
        {
            temp.push_back(s[j]);
        }
    }

    // change all character to lowercase

    for (int j = 0; j < s.length(); j++)
    {
        temp[j] = toLowerCase(temp[j]);
    }
    return CheckPalindrom(temp);
}

int main()
{
    string s;
    cin >> s;

    bool found = isPalindrom(s);

    if(found)
    {
        cout << "The given character is palindrome "<<endl;
    }

    else
    {
        cout << "The given character is not palindrome "<<endl;
    }
    return 0;


}