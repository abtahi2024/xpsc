#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int d=-1,r=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            r|=a[i];
            d&=a[i];
        }
        cout<<r-d<<endl;

    }
  


    return 0;
}