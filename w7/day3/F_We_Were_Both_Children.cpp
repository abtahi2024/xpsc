#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int n;cin>>n;
    vector<ll>a(n+1);
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        if(x<=n)
        {
            a[x]++;   
        }
    }
    vector<ll >b(n+1);
    for(int i=1;i<=n;i++)
    {
      for(int j=i;j<=n;j+=i)
      {
        b[j]+=a[i];
      }  
    }
    ll ans=0;
    for(auto v:b)
    {
        ans=max(ans,v);
    }
    cout<<ans<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

