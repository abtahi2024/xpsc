#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>a(k);
        for(int i=0;i<k;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end(),greater<int>());
        int cat=0,mice=0;
        for(int i=0;i<k;i++)
        {
            if(cat<a[i])
            {
                cat+=(n-a[i]);
                mice++;
            }
            else
            {
                break;
            }
        }

        cout<<mice<<endl;
    }

    return 0;
}

