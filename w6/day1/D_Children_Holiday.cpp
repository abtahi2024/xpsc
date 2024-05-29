#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<tuple<int,int,int>>a(n);
    for(int i=0;i<n;i++)
    {
        int t,z,y;cin>>t>>z>>y;
        a[i]=make_tuple(t,z,y);
    } 
    vector<int>can(n);
    auto ok=[&](int mid)
    {
        vector<int >may(n);
        int has=m;
        for(int i=0;i<n;i++)
        {
            tuple<int ,int ,int >T=a[i];
            int t,z,y,total,can,reming,curr;
            t=get<0>(T);
            z=get<1>(T);
            y=get<2>(T);
            total=((t*z)+y);
            can=(mid/total);
            reming=mid%total;
            curr=((can*z)+min(z,(reming/t)));
            curr=min(has,curr);
            has-=curr;
            may[i]=curr;
        }
        if(!has)
        {
            for(int i=0;i<n;i++)
            {
                can[i]=may[i];
            }
        }
        return (!has);
    };
    int l=0,r=1e18,mid,ans;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(ok(mid))
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<ans<<endl;
    for(auto val:can)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}