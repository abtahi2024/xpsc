#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,c;
        cin>>n>>c;
        vector<ll>a(n);

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            a[i]+=(i+1);
        }
        ll ans=0,sum=0;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++)
        {
            if(sum+a[i]>c)
            {
                break;
               
            }
            sum+=a[i];
            ans++;
        }

        cout<<ans<<endl;
    }

    return 0;
}

