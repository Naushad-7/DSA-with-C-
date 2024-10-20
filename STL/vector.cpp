#include<iostream>
#include<vector>
using namespace std;

vector<int> reverseArray(vector<int>v)
{
    int s =0;
    int e = v.size()-1;

    while(s<=e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }

    return v;
}

vector<int> printArray(vector<int>v)
{
    for(int i = 0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int>v;

    v.push_back(3);
    v.push_back(6);
    v.push_back(8);
    v.push_back(4);

    // cout<<"Array  before the sorting are "<<endl;
    // printArray(v);

    vector<int> ans = reverseArray(v);
    printArray(ans);
}