#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    bool flag=false;
    for(int i=a;i<=b;i++)
    {
        if(i%c==0)
        {
            cout<<i;
            flag=true;
            break;
        }
    }
    if(!flag)
    {
        cout<<-1;
    }


    return 0;
}