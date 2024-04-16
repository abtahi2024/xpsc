#include<bits/stdc++.h>
#define l long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        l x;
        cin>>x;
        l a=0,b=0;
        l bitpos=0;
        while((1<<bitpos)<=x)
        {
            bitpos++;
        }

        a=1<<(bitpos-1);

        b=a^x;

        cout<<b<<" "<<a<<endl;


        
    } 


    return 0;
}