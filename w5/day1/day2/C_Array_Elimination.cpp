#include<bits/stdc++.h>
using namespace std;
int bit [30];
void solve(int n,int a[])
{
    for(int i=0;i<30;i++)
    {
        bit[i]=0;
    }
    for(int i=0;i<30;i++)
    {
        int num =(1LL<<i);
        for(int j=0;j<n;j++)
        {
            if((a[j]&num)!=0)
            {
                bit[i]++;
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        } 
        solve(n,a);
       for(int k=1;k<=n;k++)
       {
        bool possible=false;
        for(int i=0;i<30;i++)
        {
            if((bit[i]%k)!=0)
            {
                possible=true;
                break;
            }
        }
        if(possible==0)
        {
            cout<<k<<" ";
        }
       }

       cout<<endl;
    }
    


    return 0;
}

