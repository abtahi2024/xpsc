#include<bits/stdc++.h>
#define ll long long 
#define pi pair<ll int,ll int> 
using namespace std;
void solve()
{
    int n,q;
    cin>>n>>q;
    vector<ll int>a(n+1,0);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    vector<ll int>p(n+2,0);
    for(int i=1;i<=n;i++)
    {
        p[i]=a[i]+p[i-1];
    }
    vector<ll int>ans(q);
    vector<pi>k(q);
    for(int i=0;i<q;i++)
    {
        cin>>k[i].first;
        k[i].second=i;
    }
    sort(k.begin(),k.end());
    int ap=0;
    for(int i=0;i<q;i++)
    {
        while(true)
        {
            if(ap==n||a[ap+1]>k[i].first)
            {
                break;
            }
            ap++;
        }
        ans[k[i].second]=p[ap];
    }
    for(int i=0;i<q;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}