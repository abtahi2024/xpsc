#include<bits/stdc++.h>
using namespace std;
bool ok(int t,int n,int x,int y)
{
    if(t<min(x,y))
    {
        return false;
    }
    int cunt=1;
    t-=min(x,y);
    cunt+=t/x+t/y;
    return cunt>=n;
}
int main()
{
    int n,x,y;
    cin>>n>>x>>y; 
    int l=0,r=max(x,y)*n,mid,ans;
    while (l+1<r)
    {
        /* code */
        mid=l+(r-l)/2;
        if(ok(mid,n,x,y))
        {
            r=mid;
        }
        else
        {
            l=mid;
        }
        ans=mid;
        // cout<<r<<endl; 
    }
    cout<<r<<endl;
    
    

    return 0;
}