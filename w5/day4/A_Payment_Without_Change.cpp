#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n,s;
        cin>>a>>b>>n>>s;
        int mid=s/n;
        mid=min(mid,a);
        if(s-n*mid<=b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}