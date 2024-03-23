#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int  n,x;
    cin>>n>>x;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    vector<ll>prmi;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=x)
        {
            prmi.push_back(a[i]);
        }
    }

    for(int i=0;i<prmi.size();i++)
    {
        cout<<prmi[i]<<" ";
    }

    return 0;
}