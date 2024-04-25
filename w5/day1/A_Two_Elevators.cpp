#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int ele1 = abs(a-1);
        int ele2 = abs(b-c)+(c-1);
        if(ele1 == ele2)
        {
            cout<<"3"<<endl;

        }
        else if(ele1 < ele2)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }
    }

    return 0;
}

