#include<iostream>
using namespace std;

int main()
{
    cout<<"\n\n\t\tStudytonight - Best place to learn\n\n\n";

    int n, m, c, d, first[10][10], second[10][10], sum[10][10], diff[10][10];
    cout<<"\nEnter the number of rows and columns of the first matrix \n\n";
    cin>>m, n;

    cout<<"\nEnter the %d elements of the first matrix \n\n"<<m*n;
    for(c = 0; c < m; c++)
        for(d = 0; d < n; d++)
            cin>>first[c][d];

    cout<<"\nEnter the %d elements of the second matrix \n\n"<<m*n;
    for(c = 0; c < m; c++)
        for(d = 0; d < n; d++)
            cin>>second[c][d];
    cout<<"\n\nThe first matrix is: \n\n";
    for(c = 0; c < m; c++)
    {
        for(d = 0; d < n; d++)
        {
            cout<<"\t"<< first[c][d];
        }
    cout<<"\n";
    }

    cout<<"\n\nThe second matrix is: \n\n";
    for(c = 0; c < m; c++)
    {
        for(d = 0; d < n; d++)
        {
            cout<<"\t"<<second[c][d];
        }
    cout<<"\n";
    }
    for(c = 0; c < m; c++)
        for(d = 0; d < n; d++)
            sum[c][d] = first[c][d] + second[c][d];

    cout<<"\n\nThe sum of the two entered matrices is: \n\n";
    for(c = 0; c < m; c++)
    {
        for(d = 0; d < n; d++)
        {
            cout<<sum[c][d];
        }
        cout<<"\n";
    }
    for(c = 0; c < m; c++)
        for(d = 0; d < n; d++)
            diff[c][d] = first[c][d] - second[c][d];
    cout<<"\n\nThe difference(subtraction) of the two entered matrices is: \n\n";
    for(c = 0; c < m; c++)
    {
        for(d = 0; d < n; d++)
        {
            cout<<"\t"<<diff[c][d];
        }
        cout<<"\n";
    }

    cout<<"\n\n\t\t\tCoding is Fun !\n\n\n";
    return 0;
}