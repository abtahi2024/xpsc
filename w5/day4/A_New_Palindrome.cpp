#include<bits/stdc++.h>
using namespace std;
void solve(string a)
{
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int n=a.length()/2;
        bool possi=false;
        for(int i=1;i<n;i++)
        {
            if(a[0]!=a[i])
            {
                possi=true;
            }
           
        }
        if(possi)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

