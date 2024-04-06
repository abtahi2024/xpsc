#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;

        cin>>a>>b;

        if(a==b)
        {
            cout<<"="<<endl;
        }
        else if(a.back()>b.back())
        {
            cout<<"<"<<endl;
        }
        else if(a.back()<b.back())
        {
            cout<<">"<<endl;
        }

        else if((a.size()>b.size()&&a.back()=='L')||(a.size()<b.size()&&a.back()=='S'))
        {
            cout<<">"<<endl;
        }
        else
        {
            cout<<"<"<<endl;
        }




    } 


    return 0;
}



