#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        ll ans=0;
        priority_queue<ll>pq;
        for(int i=0;i<n;i++)
        {
            // pq.push(a[i]);
            if(a[i]==0)
            {
                if(!pq.empty())
                {
                    ans+=pq.top();
                    pq.pop();
                }
            
            }
            else
            {
                pq.push(a[i]);
            }
        }
     

        cout<<ans<<endl;
    } 


    return 0;
}