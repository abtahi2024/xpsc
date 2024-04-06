#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll sum=0,op=0;
        bool nag=false;
        for(int i=0;i<n;i++)
        {
           sum+=abs(a[i]);
           if(a[i]<0&&nag==false)
           {
                nag=true;
                op++;
           }
        if(a[i]>0)
        {
            nag=false;
        }
            
            
        }
        cout<<sum<<" "<<op<<endl;
    } 


    return 0;
}


