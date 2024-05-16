#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int >b(n);
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        bool good=true;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++)
        {
            if(a[i]>b[i] || b[i]-a[i]>1)
            {
               good=false;
               break;
            }
        }
        if(good)
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