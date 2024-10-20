#include<iostream>
using namespace std;
int main()
{
    int p1,p2,p3;
    int age;
    cout<<"Please enter the age of all person " <<endl;
    cin>>p1>>p2>>p3;
        if(p1>p2)
        {
            if(p1>p3)
            {
                cout<<p1<<"is the oldest among all";
            }

            else 
            {
                cout<<p3<<"is the oldest among all ";
            }

            if(p2>p1)
            {
                cout<<p2<<"is oldest among all";
            }
            else
            {
                cout<<p3<<"is the oldest among all ";
            }
        }



}