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
        int k=1;
        while(k*2<=n)
        {
            k*=2;
        }
        
        k--;
        cout<<k<<endl;

    } 


    return 0;
}

