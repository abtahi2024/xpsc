#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<ll>b(q);
        for(int i=0;i<q;i++)
        {
            cin>>b[i];
        }
        set<ll>st;
        for(int i=0;i<q;i++)
        {
            if(st.find(b[i])==st.end())
            {
                ll power=1<<b[i];
                // ll add=power>>1;
                for(int j=0;j<n;j++)
                {
                    st.insert(b[i]);
                    if(a[j]%(1<<b[i])==0)
                    {
                        a[j]+=(1<<b[i]-1);
                    }
                }
            }
           
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }

        cout<<endl;
    } 


    return 0;
}


