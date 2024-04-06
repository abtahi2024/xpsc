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
        set<ll>s;
        ll vis=0;
        for(int i=0;i<n;i++)
        {
            s.insert(a[i]);
            vis++;

        if(vis>s.size())
        {
            break;
        }

        }
        

        cout<<n-s.size()<<endl;

    }

    return 0;
}

