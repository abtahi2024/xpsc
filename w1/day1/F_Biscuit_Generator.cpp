#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    cin>>a>>b>>t; 
    int x=0;
    for(int i=1;i<=t+0.5;i++)
    {
        if(i%a==0)
        {
            x+=b;
        }
    }
    cout<<x;

    return 0;
}