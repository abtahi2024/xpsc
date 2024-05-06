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
        int x=k+(k-1)/(n-1);
        cout<<x<<endl;
    } 


    return 0;
}