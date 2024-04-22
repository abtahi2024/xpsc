#include<bits/stdc++.h>
using namespace std;
void bite_mask(int n,int m,int k)
{
    vector<int >a(m+1);
    for(int i=0;i<=m;i++)
    {
        cin>>a[i];
    }
    vector<vector <int>>all;
    for(int mak=0;mak<=m;mak++)
    {
        vector<int>v;
        for(int k=0;k<n;k++)
        {
            if((a[mak]>>k)&1)
            {
                v.push_back(1);
            }
            else
            {
                v.push_back(0);
            }
        }
        all.push_back(v);
    }
    int ans=0;
    vector<int>fedor=all[m];
    for(int i=0;i<all.size()-1;i++)
    {
        vector<int >v2=all[i];
        int cut=0;
        for(int k=0;k<n;k++)
        {
            if(fedor[k]!=v2[k])
            {
                cut++;
            }
        }

        if(cut<=k)
        {
            ans++;
        }
    }

    cout<<ans<<endl;
}
int main()
{
    int n,m,k;
    cin>>n>>m>>k;

    bite_mask(n,m,k);
    

    return 0;
}
