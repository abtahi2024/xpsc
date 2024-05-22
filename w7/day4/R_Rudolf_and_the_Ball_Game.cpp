#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m,x,d;cin>>n>>m>>x;
        set<ll>st1,st2;
        char c;
        st1.clear();
        st2.clear();
        st1.insert(x);
        while(m--)
        {
            cin>>d>>c;
            if(c!='1')
            {
                for(ll it:st1)
                {
                    st2.insert((it+d-1)%n+1);
                }
            }
            if(c!='0')
            {
                for(ll it:st1)
                {
                    st2.insert((it+n-d-1)%n+1);
                }
            }
            st1=st2;
            st2.clear();
        }
        cout<<st1.size()<<endl;
        for(auto it:st1)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    } 


    return 0;
}