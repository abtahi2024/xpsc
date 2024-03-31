#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        long long int a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        long long int ans=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               long long int sum=0;
               for(int k=0;k<n;k++)
               {
                for(int l=0;l<m;l++)
                {
                    if(abs(i-k)==abs(j-l))
                    {
                        sum+=a[k][l];
                    }
                }
               }

                ans=max(ans,sum);
            }

            
        }
        cout<<ans<<endl;
       
    }


    return 0;
}


