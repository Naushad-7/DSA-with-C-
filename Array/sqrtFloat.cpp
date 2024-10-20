#include<iostream>
using namespace std;
long long int sqrtInteger(int n)
{
    long long int s = 0;
    long long int e = n;

    long long int mid = s + (e - s)/2;

    long long int ans = -1;

    while(s <= e)
    {
        long long int square =  mid * mid;
        if(square == n)
        {
            return mid;
        }
        else if(square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s)/2;
    }
    return ans;
}

double morePrecious(int n, int precision, int tempsol)
{
    double factor = 1;
    double ans = tempsol;

    for(int i=0; i<=precision; i++)
    {
        factor = factor/10;
    

        for(double j= ans; j*j<n; j= j+factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Please entert the number to find the square root = ";
    cin>>n;


    int tempsol= sqrtInteger(n);
    cout<<"The square root of "<<n<<" is "<<tempsol<<endl;
    cout<<"The square root of "<<n<<" is " ;
    int decisize= 3;
    cout<<morePrecious(n, decisize, tempsol);

    return 0;


}