#include<iostream>
using namespace std;

int main()
{
    float length,breath;
    cout<<"please enter the length of rectangle";
    cin>>length;
    cout<<"please enter the breath of rectangle";
    cin>>breath;


    if(length==breath)
    {
        cout<<"this is a square";

    }
    else
    {
        cout<<"This is a rectangle";
    }
    
    return 0;
}