#include<bits/stdc++.h>
using namespace std;
int main()
{
    string t,p;cin>>t>>p;
    vector<int>a(t.size());
    for(int i=0;i<t.size();i++)
    {
        cin>>a[i];
    }
    auto ok=[&](int mid)
    {
        vector<bool>bad(t.size()+1);
        for(int i=0;i<mid;i++)
        {
            bad[a[i]]=true;
        }
        int k=0;
        bool foud=false;
        for(int i=0;i<t.size();i++)
        {
            if(t[i]==p[k]&&!bad[i+1])
            {
                k++;
            }
            if(k==p.size())
            {
                foud=true;
                break;
            }
        }
        return foud;
    };
    int l=0,r=t.size(),mid,ans=0;
    while(l<=r)
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

    }
    cout<<ans<<endl;
    return 0;
}