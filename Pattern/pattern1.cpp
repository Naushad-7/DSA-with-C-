#include<iostream>
using namespace std;

int main()
{
    int col,row;
    cin>>col>>row;
    // int n;
    // cin>>n;

    for(int i=1; i<=col; i++){
        for(int j=1; j<=row; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}