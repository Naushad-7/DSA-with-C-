#include<iostream>
using namespace std;
int main()
{
    int product;
    cout<<"enter the amont of the product ";
    cin>>product;
    int total;
    total= product*100;
    cout<<"The total amount of the Product is "<<total<<endl;

    if(total>1000)
    {
        total=total-total*10/100;
        cout<<"The total amount after the discount "<<total<<endl;
    }
    else 
    cout<<"There is no any discount below 1000 rupees "<<total;
}