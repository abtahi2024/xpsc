#include<bits/stdc++.h>
#define pi pair<char,int>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector<pi>v;
        int cont1=s[0];
        int cont2=s[s.size()-1];
        for(int i=1;i<s.size()-1;i++)
        {
            if((s[i]<=cont2&&s[i]>=cont1)||(s[i]<=cont1&&s[i]>=cont2))
            {
                v.push_back({s[i],i});
            }
        }

        sort(v.begin(),v.end());
        cout<<abs(cont1-cont2)<<" "<<v.size()+2<<endl;
        if(cont1>cont2)
        {
            cout<<1<<" ";

            for(int i=v.size()-1;i>-1;i--)
            {
                cout<<v[i].second+1<<" ";
                
            }
            cout<<s.size()<<" ";
        }
        else
        {
            cout<<1<<" ";

            for(int i=0;i<v.size();i++)
            {
                cout<<v[i].second+1<<" ";
              
            }
            cout<<s.size()<<" ";
        }

        cout<<endl;
    }

    return 0;
}

