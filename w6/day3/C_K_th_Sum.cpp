#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<long long int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<long long int>b(n);
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    vector<long long int> sum;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           sum.push_back(a[i]+b[j]);
           
            
        }
    }
   sort(sum.begin(),sum.end());
    cout<<sum[k]<<endl;


    return 0;
}