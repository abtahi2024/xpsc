// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;

//       vector<string>s(n);
//         set<string>st;
//      for (int i = 0; i < n; i++) {
//             cin >> s[i];
//             st.insert(s[i]);
//         }
    
  
//       vector<int>ans(n,0);

//       for(int i=0;i<n;i++)
//       {
//         for(int j=0;j<s[i].size();j++)
//         {
//             string P= s[i].substr(0,j);
//             string S=s[i].substr(j);
//             if(st.count(P)&&st.count(S))
//             {
//                 ans[i]=1;
//                 break;
//             }
//         }
//       }
//         for(int i=0;i<n;i++)
//         {
//             cout<<ans[i];
//         }
//         cout<<endl;


        
//     } 


//     return 0;
// }


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

      vector<string>s(n);
      for(int i=0;i<n;i++)
      {
        cin>>s[i];
      }
      vector<int>ans(n,0);

      for(int i=0;i<n;i++)
      {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(s[j]+s[k]==s[i])
                {
                    ans[i]=1;
                    break;
                }
            }
            if(ans[i]==1)
            {
                break;
            }
        }
      }

        for(int i=0;i<n;i++)
        {
            cout<<ans[i];
        }
        cout<<endl;


        
    } 


    return 0;
}

