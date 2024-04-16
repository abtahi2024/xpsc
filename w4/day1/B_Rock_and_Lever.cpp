#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n);

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        ll cunt=0;
        map<ll,ll>mp;
        for(int i=0;i<n;i++)
        {
            cunt=0;
            while(a[i])
            {
                a[i]=a[i]>>1;
                cunt++;
            }

            mp[cunt]++;

        }
        ll ans=0;
        for(auto it:mp)
        {
            ans+=(it.second*(it.second-1))/2;
        }

        cout<<ans<<endl;
    } 


    return 0;
}


