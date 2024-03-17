#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int>b(m);
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int l=0,r=0;
    vector<int>mag;
    while (l<n&&r<m)
    {
        if(a[l]<=b[r])
        {
            mag.push_back(a[l]);
            l++;
        }
        else
        {
            mag.push_back(b[r]);
            r++;
        }
    }
    while(l<n)
    {
        mag.push_back(a[l]);
        l++;
    }
    while(r<m)
    {
       mag.push_back(b[r]);
       r++;
    }
    for(int i=0;i<n+m;i++)
    {
        cout<<mag[i]<<" ";
    }
    return 0;
}


