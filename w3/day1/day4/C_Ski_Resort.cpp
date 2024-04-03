#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,q;
        cin>>n>>k>>q;

        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll cunt=0;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<=q)
            {
                cunt++;
            }
            else
            {
                cunt=0;
            }

             if(cunt>=k)
                {
                    ans+=(cunt-k+1);
                }
        }
        cout<<ans<<endl;
    }

    return 0;
}