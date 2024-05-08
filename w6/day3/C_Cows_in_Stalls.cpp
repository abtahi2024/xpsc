#include<bits/stdc++.h>
using namespace std;
bool vaild(vector<int>a,int d,int c)
{
    int count=1;
    int l=a[0];
    for(int i=1;i<a.size();i++)
    {
        if(a[i]-l>=d)
        {
            count++;
            l=a[i];
        }
        
    }
    return count>=c;
}
int main()
{
    int  n,k;
    cin>>n>>k;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        a.push_back(x);
    }
    sort (a.begin(),a.end());
    int l=1,r=a.back()-a[0],mid,ans=-1;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(vaild(a,mid,k))
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
        
    }
    cout<<ans<<endl;


    return 0;
}

