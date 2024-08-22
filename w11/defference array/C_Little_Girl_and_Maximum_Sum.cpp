
#include <bits/stdc++.h>


#define ll long long
#define vl vector<ll>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
        ll n,q;cin>>n>>q;
        vl a(n);
        for(int i=0;i<n;i++)
        { cin>> a[i]; }
        vl d(n+1);
        for(int i=1;i<=q;i++)
        {
            ll l,r;cin>>l>>r;
            l--;r--;
            d[l]++;
            d[r+1]--;
        }
        for(int i=1;i<=n;i++)
        { d[i]=d[i-1]+d[i]; }

        sort(a.begin(),a.end(),greater<int>());
        sort(d.begin(),d.end(),greater<int>());
        ll ans=0;
        for(int i=0;i<n;i++)
        { ans+=(1LL* d[i]*a[i]);}

        cout<<ans<<endl;

        return 0;
}