#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int x=0;
    x=max(x,a+a-1);
    x=max(x,b+b-1);
    x=max(x,a+b);
    cout<<x<<endl;


    return 0;
}