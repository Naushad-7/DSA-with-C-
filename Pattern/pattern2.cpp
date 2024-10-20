//programm to a hollow patter ractangle
#include<iostream>
using namespace std;

int main()
{
    // int row,col;
    // cin>>row>>col;

    // for(int i=1; i<=row; i++){
    //     for(int j=1; j<=col; j++){
    //         if(i==1 || i==row){
    //             cout<<"* ";
    //         }
    //         else if(j==1 || j==col)
    //         {
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


    int n;
    cin>>n;

    // int i=1,j;
    //     char letter='A'+i-1;
    // for(; i<=n; i++)
    // {
    //     for(j=1; j<=n; j++)
    //     {
    //         cout<<letter<<" ";
    //         letter++;
    //     }
    //     cout<<endl;

    // }


    int i,j;
    
    for(i=1; i<=n; i++)
    {
      for(j=1; j<=n-i+1; j++)
        {
            if(j<=n-i)
            {
                cout<<" ";
            }
            else
            {

            cout<<i;
            }
        }
        cout<<endl;
    }


}