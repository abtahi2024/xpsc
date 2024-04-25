#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--) 
    {
        int n,x;
        cin>>n;
        string s;
        cin>>s;
        string t;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='0')
            {
                x=(s[i-2]-'0')*10+(s[i-1]-'0');
                i-=2;
            }
            else
            {
                x=s[i]-'0';
            }
            t=(char)(x+'a'-1)+t;
        }

        cout<<t<<endl;
    }


    return 0;
}

