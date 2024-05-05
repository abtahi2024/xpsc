#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    /*lamdary funcation*/
    auto ok=[&](long long int m)
    {
        long long int total=0;
        for(int i=0;i<n;i++)
        {
            total+=(m/a[i]);
            if(total>=t)
            {
                return true;
            }
        }
        return false;
    };
    long long int l=1,r=1e18,mid,ans=n;
    while (l<=r)
    {
        mid=l+(r-l)/2;
        if(ok(mid))
        {
            // ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
        ans=mid;
    }
    
    cout<<ans<<endl;
    return 0;
}