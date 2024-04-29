// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int a,b,n;
//         cin>>a>>b>>n;
//         int c[n];

        
//         long long int sum=b;
        
//        for(int i=0;i<n;i++)
//         {
//             cin>>c[i];
//             sum+=min(a-1,c[i]);
//         }

//         cout<<sum<<endl;
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
        int a,b,n;
        cin>>a>>b>>n;
        int c[n];

        for(int i=0;i<n;i++)
        {
            cin>>c[i];
        }
        long long int sum=0;
        if(b>=a)
        {
            sum=a;
            b=a;
        }
        else
        {
            sum=b;
        }
        for(int i=0;i<n;i++)
        {
            if(c[i]+1<=a)
            {
                sum+=c[i];
            }
            else
            {
                sum+=a-1;
            }
        }

        cout<<sum<<endl;
    }

    return 0;
}

