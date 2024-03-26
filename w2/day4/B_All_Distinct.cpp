#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        map<int,int>mp;

        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
        }

        int cnt=0;

        for(auto it:mp)
        {
            cnt+=(it.second-1);
        }

        int ans=n-cnt;

        if(cnt%2==1)
        {
            ans--;
        }

        cout<<ans<<endl;
    } 


    return 0;
}


