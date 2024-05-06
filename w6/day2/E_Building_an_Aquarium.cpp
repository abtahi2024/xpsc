#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int>a(n+5);
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        ll l=1,r=2e9+5,mid,ans=0;
        while(l<=r)
        {
            mid=(l+r)/2;
            ll sum=0;
            for(int i=1;i<=n;i++)
            {
                if(a[i]<mid)
                sum+=mid-a[i];
            }
            if(sum<=x)
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}

