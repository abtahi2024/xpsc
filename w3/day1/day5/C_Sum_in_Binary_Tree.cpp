#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll sum=0;
        
        while (n!=0)
        {
            sum+=n;
            n/=2;//move to parent
        }
        
        cout<<sum<<endl;
    }

    //i use the ...?
    return 0;
}