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
        string s;
        cin>>s;
        string b;
        for(int i=0;i<n+1;i++)
        {
            b+='0';
        }

        int cut=0;
        for(int i=0;i<=(n-1)/2;i++)
        {
            if(s[i]!=s[n-i-1])
            {
                cut++;
            }
        }
        b[cut]='1';
        for(int i=cut;i<=n-cut;i+=2)
        {
            b[i]='1';
            if(n%2)
            {
                b[i+1]='1';
            }
        }

        for(auto i:b)
        {
            cout<<i;
        }

        cout<<endl;

    } 


    return 0;
}