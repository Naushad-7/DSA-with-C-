#include<bits/stdc++.h> 
using namespace std;
char getMaxOccurcharcter(string s)
{
    int arr[26]={0};

    for(int i=0; i<s.size(); i++)
    {
        char ch = s[i];
        arr[ch-'a']++;

    }

    int maxi = -1, ans =0;
    for(int i=0; i<26; i++)
    {
        if(arr[i]>maxi)
        {
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a'+ans;
}

int main()
{
    string s;
    cout<<"Please enter Your String here "<<endl;
    cin>>s;

    cout<<getMaxOccurcharcter(s);

}