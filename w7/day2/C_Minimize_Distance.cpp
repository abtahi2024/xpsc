#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n,k;cin>>n>>k;
        vector<ll>a,b;
        for(ll i=0;i<n;i++)
        {
            ll x;cin>>x;
            if(x>0)
            {
                a.push_back(-x);
            }
            else
            {
                b.push_back(x);
            }
        }
        ll ans=0;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(ll i=0;i<a.size();i+=k)
        {
            ans-=2*a[i];
        }
        for(ll j=0;j<b.size();j+=k)
        {
            ans-=2*b[j];
        }
        ll N=0,M=0;
        if(!a.empty())
        {
            N-=a[0];
        }
        if(!b.empty())
        {
            M-=b[0];
        }
        // ans-=max(ans,n,m);
        cout<<ans-max(N,M)<<endl;
    } 


    return 0;
}