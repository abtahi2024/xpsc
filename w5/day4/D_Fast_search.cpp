
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;cin>>k;  
    sort(a.begin(),a.end());
    while(k--)
    {
        int l,r;cin>>l>>r;
        auto it1=lower_bound(a.begin(),a.end(),l);
        int w=it1-a.begin();
        auto it2=upper_bound(a.begin(),a.end(),r);
        int p=it2-a.begin();
        cout<<p-w<<" ";
    }
    
    return 0;
}

