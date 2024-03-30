#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;

        vector<ll>a(n+1,0);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        } 
        vector<ll> par(n+1,0);
        

        for(int i=1;i<=n;i++)
        {
          par[i]=par[i-1]+a[i-1];
        }
        while (q--)
         {
            ll l,r,k;
            cin>>l>>r>>k;

           
          ll sum=par[n];
          sum-=par[r]-par[l-1];
          sum+=(r-l+1LL)*k;

          

          if(sum%2LL==1LL)
          {
            cout<<"YES"<<endl;
          }
          else
          {
            cout<<"NO"<<endl;
          }
        }
        
    }
    


    return 0;
}







