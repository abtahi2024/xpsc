#include<bits/stdc++.h>
#define ll long long int
const int N =110;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
       ll a[N][N];

        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<n;j++)
            {
                cin>>a[i][j];
            }
        }

        ll s=a[1][1];

        if(s!=a[2][1])
        {
            s=a[3][1];
        }

        cout<<s<<" ";

        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<n;j++)
            {
                if(a[i][1]!=s)
                {
                    cout<<a[i][j]<<" ";
                }

            }

        }

        cout<<endl;

        
    } 


    return 0;
}


