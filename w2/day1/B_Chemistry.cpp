#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        int cunt =0;
        for(auto fq:mp)
        {
            if(fq.second%2!=0)
            {
                cunt++;
            }
        }
        if(cunt-1<0)
        {
            cunt=0;
        }
        else
        {
            cunt=cunt-1;
        }
        if(k>=cunt&&k<=n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    } 


    return 0;
}