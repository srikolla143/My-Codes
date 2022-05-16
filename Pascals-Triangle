#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row,col,n=6;
    int arr[n][n];
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n;col++)
        {
            arr[row][col]=0;
        }
    }
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n;col++)
        {
            if(col==0)
            {
                arr[row][col]=1;
            }
        }
    }
    arr[0][0]=arr[1][0]=1;
    for(int row=1;row<n;row++)
    {
        for(int col=1;col<n;col++)
        {
            arr[row][col]=arr[row-1][col-1]+arr[row-1][col];
        }
    }
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<=row;col++)
        {
            cout<<arr[row][col];
        }
        cout<<"\n";
    }
    
}
