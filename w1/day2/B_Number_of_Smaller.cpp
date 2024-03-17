#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
    }
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int l=0,r=0,ans=0;
    while(r<m)
    {
        while (a[l]<b[r]&&l<n)
        {
            ans++;
            l++;
        }
        r++;
        cout<<ans<<" ";   
    }
    cout<<endl;
   

    return 0;
}