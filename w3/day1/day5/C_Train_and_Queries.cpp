// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,k;
//         cin>>n>>k;
//         vector<int>u(n);
//         for(int i=0;i<n;i++)
//         {
//             cin>>u[i];
//         }
        
//        map<int,vector<int>>mp;
//        for(int i=0;i<n;i++)
//        {
//         mp[u[i]].push_back(i);
//        }
//         for(int i=0;i<k;i++)
//         {
//             int a,b;
//             cin>>a>>b;
//             if(mp[a].empty()||mp[b].empty())
//             {
//                 cout<<"NO"<<endl;
//             }
//             else if(a==b)
//             {
//                 cout<<"YES"<<endl;
//             }
//             else if(mp[a].front()<mp[b].back())
//             {
//                 cout<<"YES"<<endl;
//             }

//             else
//             {
//                 cout<<"NO"<<endl;
//             }
           
//         }
//     }

//     return 0;
// }


#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,q;
        cin>>n>>q;
        vector<ll >u(n);
        for(int i=0;i<n;i++)
        {
            cin>>u[i];
        }
        map<ll ,vector<ll>>mp;
        for(int i=0;i<n;i++)
        {
            mp[u[i]].push_back(i);
        }
        for(int i=0;i<q;i++)
        {
            ll a,b;
            cin>>a>>b;
            if(mp.count(a)==0||mp.count(b)==0)
            {
                cout<<"NO"<<endl;
                continue;
            }
            bool possible=false;
            for(int ind_a:mp[a])
            {
                for(int ind_b:mp[b])
                {
                   if(ind_a<ind_b)
                   {
                    possible=true;
                    break;
                   } 
                }

                
            }

            if(possible)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    

    return 0;
}