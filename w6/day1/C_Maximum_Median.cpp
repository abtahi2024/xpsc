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
    sort(a.begin(),a.end());
    /*lamdary funcation*/
    auto ok=[&](long long int m)
    {
        long long int total=0;
        for(int i=(n/2);i<n;i++)
        {
           if(a[i]<m)
           {
                total+=m-a[i];
           }
           
        }
        return total<=t;
    };
      
    long long int l=1,r=2e9,mid,ans=0;
    while (l<=r)
    {
        mid=l+(r-l)/2;
        if(ok(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
        // ans=mid;
    }
    
    cout<<ans<<endl;
    return 0;
}