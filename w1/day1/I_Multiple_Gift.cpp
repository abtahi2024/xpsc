#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll x,y;
    cin>>x>>y;
    ll ans=0;
    for(ll i=x;i<y;i++)
    {
        ll c=i;
        ll l=1;
      while (c*2<=y)
      {
        c*=2;
        l++;
      }
      ans=max(ans,l);
    }
    cout<<ans;


    return 0;
}