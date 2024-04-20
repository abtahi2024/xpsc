#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<ll>p;
void palindrome()
{
    int mx=1<<15;
    for(int i=0;i<mx;i++)
    {
        string s=to_string(i);
        string rve_s=s;
        reverse(s.begin(),s.end());
        if(s==rve_s)
        {
            p.push_back(i);
        }
        
    }
}
int main()
{
    palindrome();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<ll,ll>mp;
        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<p.size();j++)
            {
                if((a[i]^p[j])<=a[i])
                {
                    continue;
                }
                if(mp.find(a[i]^p[j])!=mp.end())
                {
                    ans+=mp[a[i]^p[j]];
                }
            }
        }

        for(auto it:mp)
        {
            ans+=((long long )it.second*(it.second+1))/2;
        }
        
        cout<<ans<<endl;
    }

    return 0;
}
