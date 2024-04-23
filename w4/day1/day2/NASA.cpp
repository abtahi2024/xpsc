#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<ll>p;
int mx=1<<15;
void palindrome()
{
    
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
        vector<int>cunt(mx),a;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            cunt[x]++;
            a.push_back(x);
        }
        ll ans=n;
        for(int i=0;i<n;i++)
        {
            for(int k=0;k<p.size();k++)
            {
                int curr=(a[i]^p[k]);
                ans+=cunt[curr];
            }
        }
        cout<<ans/2<<endl;
    }
}
