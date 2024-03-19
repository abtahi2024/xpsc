

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<ll>a(n);
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a.begin(),a.end());
    if(sum%2==1)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==1)
            {
                sum-=a[i];
                break;
            }
        }
        
    }
    cout<<sum<<endl;
    return 0;
}




