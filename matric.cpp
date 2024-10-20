#include<iostream>
using namespace std;
class array
{
    int a[10],i,m,n;
    public:
    void gets()
    {
        cout<<"enter 10 element of the array"<<endl;
        for(i=0; i<10; i++)
        cin>>a[i];
    }
    
    void search()
    {
        m=a[i];
        n=a[i];
        for(i=0; i<10; i++)
        {
            if(m>a[10])
            m=a[i];
            if(n<a[i])
            n=a[i];
        }
        cout<<"largest element in array= "<<n<<endl;
        cout<<"smallest elemnt in array= "<<m<<endl;
    }
};
int main()
{
    array obj;
    obj.gets();
    obj.search();
}