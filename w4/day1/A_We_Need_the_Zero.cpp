#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        vector <ll>a(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        ll x=0;

        for(int i=0;i<n;i++)
        {
          x^=a[i];
        }
        for(int i=0;i<n;i++)
        {
            a[i]^=x;
        }

       
        ll b=0;

        for(int i=0;i<n;i++)
        {
            b^=a[i];
        }

        if(b==0)
        {
            cout<<x<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }


      


    }


    return 0;
}



