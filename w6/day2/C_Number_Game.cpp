#include<bits/stdc++.h>
using namespace std;
bool solve(vector<int>a,int n,int k)
{
    multiset<int>st;
    for(auto v:a)
    {
        st.insert(v);   
    }
    for(int i=1;i<=k;i++)
    {
        if(st.empty())
        {
            return false;
        }
        int r=k-i+1;
        auto it=st.upper_bound(r);
        if(it==st.begin())
        {
            return false;
        }
        it--;
        st.erase(it);
        if(!st.empty())
        {
            it=st.begin();
            int bob=(*it);
            bob+=r;
            st.erase(it);
            st.insert(bob);
        }
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int >a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int l=0,r=n,mid,k;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(solve(a,n,mid))
            {
                k=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }

        cout<<k<<endl;
    }

    return 0;
}



