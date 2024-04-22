#include<bits/stdc++.h>
#define ll long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main()
{
    int n;
    cin>>n;
  
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    bool falg=false;
    for(int i=0;i<(1<<n);i++)
    {
        ll sum=0;
        for(int bit=0;bit<n;bit++)
        {
           if(i&(1<<bit))
           {
            sum+=a[bit];
           } 
           else
           {
            sum-=a[bit];
           }
        }
        if(sum%360==0)
        {
            falg=true;
            break;
        }
    }
    if(falg)
    {
        yes
    }
    else
    {
        no
    }
    return 0;
}