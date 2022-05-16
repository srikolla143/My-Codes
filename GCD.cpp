#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=3,y=3;
    while(x && y)
    {
        if(x>y)
        {
            x=x-y;
        }
        y=y-x;
    }
    if(x==0)
    {
        if(y==1)
        {
            cout<<"true";
        }
        cout<<"false";
    }
    if(y==0)
    {
        if(x==1)
        {
            cout<<"true";
        }
        cout<<"false";
    }
}
