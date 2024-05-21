#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int mod=1e9+7;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;cin>>n>>k;
        ll ans=0;
        ll power=1;
        while(0<k)
        {
            if(k%2==1)
            {
                ans=(ans+power)%mod;
            }
            power=(power*n)%mod;
            k/=2;
        }

        cout<<ans<<endl;
    }

    return 0;
}