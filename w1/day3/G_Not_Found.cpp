#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool flag[26]={false};
    for(int i=0;i<s.length();i++)
    {
        int va=s[i]-'a';
        flag[va]=true;
    }
    char m;
    for(int i=0;i<26;i++)
    {
        if(!flag[i])
        {
            m='a'+i;
            cout<<m;
            return 0;
        }

    }
    cout<<"None";



    return 0;
}