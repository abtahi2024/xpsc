
#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define mp map<ll,ll>
using namespace __gnu_pbds;
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    mp cnt;
    for(int i=1;i<=n;i++)
    {
        int l,r;cin>>l>>r;
        cnt[l]++;
        cnt[r+1]--;
    }
    int sum=0;bool ok=true;
    for(auto [idx,val]:cnt)
    {
        sum+=val;
        if(sum>2)
        { ok=false; break; }
    }
    if(ok)
    { yes }
    else
    { no }
    return 0;
}