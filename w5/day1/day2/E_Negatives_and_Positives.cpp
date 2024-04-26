#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll ans=LLONG_MAX;
        ll nag=0,sum=0;
        for(int i=0;i<n;i++)
        {
           if(a[i]<0)
           {
            nag++;
           }
            sum+=abs(a[i]);
            ans=min(ans,abs(a[i]));

        }
        if(nag%2==1)
        {
            sum-=(2*ans);
        }
        cout<<sum<<endl;
    } 


    return 0;
}


