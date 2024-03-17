#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<ll>a(n),b(m);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    ll l=0,r=0,ans=0;
    while(l<n&&r<m)
    {
        ll cnt1=0,cnt2=0,curr=a[l];
        while(a[l]==curr&&l<n)
        {
            cnt1++;
            l++;
        }
        while(curr>b[r])
        {
            r++;
        }
        while(b[r]==curr&&r<m)
        {
            cnt2++;
            r++;
        }
        ans+=(1LL*cnt1*cnt2);
    }
    

    cout<<ans<<endl;


    return 0;
}

