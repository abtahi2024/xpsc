#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;
        cin>>s;
        int z=0,o=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                o++;
            }
            else
            {
                z++;
            }
        }
        int game=min(z,o);
        if(game%2==0)
        {
            cout<<"Ramos"<<endl;
        }
        else
        {
            cout<<"Zlatan"<<endl;
        }
    }

    return 0;
}