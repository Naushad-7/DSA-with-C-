#include<bits/stdc++.h>
using namespace std;

bool findDuplicate(vector<int>nums)
{
    sort(nums.begin(), nums.end());
    int i = 0;
    while(i < nums.size())
    {
        if(nums[i] == nums[i+1])
        {
            return true;
        }
    }
    return false;
}


int main()
{
    vector<int>v = {12,4,12,8,6,2};

    bool found =  findDuplicate(v);
    if(found)
    {
        cout<<"The duplicate element found in the array";
    }
    else
    {
        cout<<"No duplicate element found in the array";
    }
    return 0;

}