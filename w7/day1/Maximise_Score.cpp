#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int mx=0;
            if(i+1<n)
            {
                mx=max(mx,abs(a[i+1]-a[i]));
            }
            if(i-1>=0)
            {
                mx=max(mx,abs(a[i-1]-a[i]));
            }
            ans=min(ans,mx);
        }
        cout<<ans<<endl;
    } 


    return 0;
}