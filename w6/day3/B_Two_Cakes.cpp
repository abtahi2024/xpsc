#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int l=1,r=min(a,b),mid,ans=1;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(a/mid+b/mid>=n)
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
 


    return 0;
}