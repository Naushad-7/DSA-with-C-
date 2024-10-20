#include<iostream>
using namespace std;

// function reverse a sTring

void reverseStr(string& str)
{
    int n=str.length();

    // swap charcter string from two corner

    for(int i=0; i < n/2; i++)
    swap(str[i], str[n-i-1]);
}

//drive program

int main()
{
    string str;
    cout<<"Please enter your name here which u want to reverse"<<endl;
    cin>>str;

    reverseStr(str);

    cout<<endl;

    cout<<"Name after reverse "<<endl<<endl;
    cout<<str;
    return 0;

}