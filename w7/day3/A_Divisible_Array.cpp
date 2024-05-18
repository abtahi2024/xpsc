#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>a;
        if(n%2==0)
        {
            for(int i=1;i<=n;i++)
            {
                cout<<2*i<<" ";
            }
        }
        else
        {
            for(int i=1;i<=n;i++)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    } 


    return 0;
}