#include<iostream>
using namespace  std;

int main()
{

    int n;
    cin>>n;





    /*
       A B C D
       B C D E
       C D E F
       D E F G
    */
    // int n;
    // cin>>n;

    // int i=1;
    //     char letter='A'+i-1;
    // while (i<=n)
    // {
    //     int j=1;
    //     while(j<=n)
    //     {
    //         cout<<letter<<" ";
    //         letter++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    /*
            D D D D
            C C C 
            B B 
            A
    */

    // int i=1;
    // while(i<=n)
    // {
    //     int j=1;
    //     while(j<=n-i+1)
    //     {
    //         char letter = 'A'+n-i;
    //         cout<<letter<<" ";
    //         letter++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    /*
        A B C D
        E F G H 
        I J K L
        M N O P
    */

    // int i=1;
    //     char letter='A'+i-1;
    // while(i<=n)
    // {
    //     int j=1;
    //     while(j<=n)
    //     {
    //         cout<<letter<<" ";
    //         letter++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    
    /*
                  *
                * * 
              * * *
            * * * *
    */

    // int i=1;
    // while(i<=n)
    // {
    //     int space=n-i;
    //     while(space)
    //     {
    //         cout<<"  ";
    //         space--;
    //     }
    //     int j=1;
    //     while(j<=i)
    //     {
    //         cout<<"*"<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    /*
    
    write a program to print that pattern given below

    1 1 1 1
      2 2 2              
        3 3
          4
    
    */

    // int i=1;

    // while(i<=n)
    // {
    //     int space=i-1;
    //     while(space)
    //     {
    //         cout<<"  ";
    //         space--;
    //     }

    //     int j=1;
    //     while(j<=n-i+1)
    //     {

    //         cout<<i<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;

    // }


   /*
           1
         2 2
       3 3 3 
     4 4 4 4      
   */


//   int i=1;

//   while(i<=n)
//   {
//     int space=n-i;
//     while(space)
//     {
//         cout<<"  ";
//         space--;
//     }

//     int j=1;
//     while(j<=i)
//     {
//         cout<<i<<" ";
//         j++;
//     }
//     cout<<endl;
//     i++;
//   }

/*
        1 2 3 4 
          2 3 4 
            3 4
              4
*/


    // int i=1;

    // while(i<=n)
    // {   
    //     int space=i-1;
    //     while(space)
    //     {
    //         cout<<"  ";
    //         space--;
    //     }

    //     int j=1;
    //     int count=1+i-1;
    //     while(j<=n-i+1)
    //     {

    //         cout<<count<<" ";
    //         count++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;

    // }

/*
             1
           2 3 
         4 5 6 
      7 8 9 10

*/
    // int i=1;
    // int count=1;
    // while(i<=n)
    // {
    //    int space=n-i;
       
    //    while(space)
    //    {
    //       cout<<"  ";
    //       space--;
    //    }

    //    int j=1;

    //   while(j<=i)
    //   {
    //     cout<<count<<" ";
    //     count++;
    //     j++;
    //   }
    //   cout<<endl;
    //   i++;  


    // }


    /*
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1 
    
    */
    
    // int i=1;
    // while(i<=n)
    // {
    //     int count=1;
    //     int space=n-i;
    //     while(space)
    //     {
    //         cout<<"  ";
    //         space--;
    //     }
        
    //     int j=1;
    //     while(j<=i)
    //     {
    //         cout<<count<<" ";
    //         count++;
    //         j++;
            
    //     }
    //       int start=i-1;
    //       while(start)
    //       {
    //           cout<<start<<" ";
    //           start--;
    //       }
        
    //     cout<<endl;
    //     i++;
        
    // }


/*
    1 2 3 4 5 5 4 3 2 1
    1 2 3 4 * * 4 3 2 1
    1 2 3 * * * * 3 2 1
    1 2 * * * * * * 2 1
    1 * * * * * * * * 1
*/


        int i=1;
        while(i<=n)
        {
          int j=1;
          int count=1;
          while(j<=n-i+1)
          {
            cout<<j<<"  ";
            count++;
            j++;
          }
           while(j<=i-1)
            {
                cout<<"*"<<" ";
                j++;
            }
          cout<<endl;
          i++;
        }


}