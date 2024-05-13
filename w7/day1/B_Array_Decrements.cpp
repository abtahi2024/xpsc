#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int>b(n);
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int mx=0;
        bool p=true;
        for(int i=0;i<n;i++)
        {
            mx=max(mx,a[i]-b[i]);
        }
        for(int i=0;i<n;i++)
        {
            a[i]=max(0,a[i]-mx);
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                p=false;
                break;
            }
        }
        if(p==true)
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

