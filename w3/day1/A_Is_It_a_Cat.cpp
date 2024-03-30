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

        string t="meow";

        for(int i=0;i<n;i++)
        {
            if(s[i]<=90)
            {
                s[i]+=32;
            }
        }
        string ss="";
        for(int i=0;i<n;i++)
        {
            if(ss.empty()||ss.back()!=s[i])
            {
                ss.push_back(s[i]);
            }
        }
        if(ss==t)
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




