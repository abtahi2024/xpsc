#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    for(int i=1;i<=n;i++)
    {
        if(i%4==0||i%4==1)
        {
            cout<<"b";
        }
        else
        {
            cout<<"a";
        }

        // cout<<s<<endl;
    }
    return 0;
}


