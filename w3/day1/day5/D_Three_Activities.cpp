#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool cmp(pair<ll,ll>a,pair<ll,ll>b)
{
    return a.first>b.first;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> a(n),b(n),c(n);
        vector<pair<ll ,ll>>A,B,C;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            A.push_back({a[i],i});
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            B.push_back({b[i],i});
        }
        for(int i=0;i<n;i++)

        {
            cin>>c[i];
            C.push_back({c[i],i});
        }
        
        sort(A.begin(),A.end(),cmp);
        sort(B.begin(),B.end(),cmp);
        sort(C.begin(),C.end(),cmp);

        ll ans=LLONG_MIN;

        for(int x=0;x<3;x++)
        {
            for(int y =0;y<3;y++)
            {
                for(int z=0;z<3;z++)
                {
                    if(A[x].second!=B[y].second&&A[x].second!=C[z].second&&B[y].second!=C[z].second)
                    {
                        ans=max(ans,A[x].first+B[y].first+C[z].first);
                    }
                }
            }
        }

       


        cout<<ans<<endl;
    } 

    return 0;
}



