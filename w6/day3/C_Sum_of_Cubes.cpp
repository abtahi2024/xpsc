#include<bits/stdc++.h>
#define ll long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int mx=1e4+9;
vector<ll >pw;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        for(int i=1;i<=mx;i++)
        {
            pw.push_back(pow(i,3));
        }
        bool found=false;
        ll x;cin>>x;
        for(int i=0;i<mx;i++)
        {
            if(pw[i]>=x)
            {
                break;
            }
            ll l=0,r=mx-1,mid;
            bool ok=false;
            ll need=x-pw[i];
            
            while(l<=r)
            {
                mid=l+(r-l)/2;
                if(pw[mid]==need)
                {
                    ok=true;
                    break;
                }
                else if(pw[mid]>need)
                {
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            if(ok)
            {
                found=true;
                break;
            }
        }
        if(found)
        {
            yes;
        }
        else
        {
            no;
        }

    } 


    return 0;
}