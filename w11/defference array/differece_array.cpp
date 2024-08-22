#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
#define vl vector<int>
#define pi pair<ll,ll>
#define mp map<ll,ll>
#define st set<int>
#define pq priority_queue<ll>

using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;cin>>n>>q;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    vector<int> d(n+2);
    // for(int i=1;i<=n;i++)
    // {
    //     d.push_back(a[i]-a[i-1]);
    // }
    // for(auto val:d)
    // {
    //     cout<<val<<" ";
    // }
    for(int i=1;i<=q;i++)
    {
        int l,r,x;cin>>l>>r>>x;
        d[l]+=x;
        d[r+1]-=x;
    }
    for(int i=0;i<=n+1;i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    { d[i]=d[i-1]+d[i]; }
    for(int i=0;i<=n+1;i++)
    { cout<<d[i]<<" "; }
    cout<<endl;
    for(int i=1;i<=n;i++)
    { cout<<a[i]+d[i]<<" ";}

    return 0;
}