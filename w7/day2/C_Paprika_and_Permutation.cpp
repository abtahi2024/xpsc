#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        
        set<int>st;
        for(int i=1;i<=n;i++)
        {
            st.insert(i);
        }
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            if(st.find(x)!=st.end())
            {
                st.erase(x);
            }
            else
            {
                v.push_back(x);
            }
       
        }
        bool par=false;
        sort(v.begin(),v.end(),greater<int>());
        for(auto it:v)
        {
            auto l=st.end();
            l--;
            int val=*l;
            if(val>((it-1)/2))
            {
                par=true;
                break;
            }
            // else
            // {
                st.erase(val);
            // }
        }
        if(par)
        {
            cout<<"-1"<<endl;
        } 
        else
        {
            cout<<v.size()<<endl;
        }
    } 


    return 0;
}


