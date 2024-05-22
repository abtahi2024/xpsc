#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s1,s2;
        cin>>s1;
        int n=s1.size(),small=0,cap=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s1[i]=='b')
            {
                small++;
            }
           else if(s1[i]=='B')
            {
                cap++;
            }
            else
            {
                if(s1[i]>='a'&&s1[i]<='z')
                {
                    if(small)
                    {
                        small--;
                    }
                    else
                    {
                        s2.push_back(s1[i]);
                    }
                }
                else if(s1[i]>='A'&&s1[i]<='Z')
                {
                    if(cap)
                    {
                        cap--;
                    }
                    else
                    {
                        s2.push_back(s1[i]);
                    }
                }
            }
        }
        reverse(s2.begin(),s2.end());
        cout<<s2<<endl;
    }
    return 0;
}


