#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int cunt=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=t[i])
        {
            cunt++;
        }
    }
    cout<<cunt<<endl;


    return 0;
}