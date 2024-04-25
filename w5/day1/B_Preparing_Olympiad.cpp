#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r,x;
    cin>>n>>l>>r>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<(1<<n);i++)
    {
        int mx=INT_MIN,mi=INT_MAX;
        int sum=0;
        for(int k=0;k<n;k++)
        {
            if(i&(1<<k))
            {
                sum+=a[k];
                mx=max(mx,a[k]);
                mi=min(mi,a[k]);
            }
           
        }
            if(l<=sum&&sum<=r&&(mx-mi)>=x)
            {
                ans++;
            }   
    }
    cout<<ans<<endl;
    return 0;
}