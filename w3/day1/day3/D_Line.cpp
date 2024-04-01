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
        string s;
        cin>>s;
        vector<int> d(n);
        long long int total=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                d[i]=i;
            }
            else
            {
                d[i]=n-1-i;
            }
            total+=d[i];
        }

         sort(d.begin(), d.end());

        for(int j=0;j<n;j++)
        {
            if(n-1-2*d[j]>0)
            {
                total+=n-1-2*d[j];
            }

            cout<<total<<" ";
        }

        cout<<endl;
    }    


    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
        
//         vector<int> d(n);
//         long long total = 0;
//         for(int i = 0; i < n; i++) {
//             if(s[i] == 'L') {
//                 d[i] = i;
//             } else {
//                 d[i] = n - 1 - i;
//             }
//             total += d[i];
//         }

//         sort(d.begin(), d.end());

//         for(int j = 0; j < n; j++) {
//             // Calculate the updated total after flipping at most j people
//             // total -= d[j];
//             if(n - 1 - 2 * d[j]>0)
//             total += (n - 1 - 2 * d[j]);
//             cout << total << " ";
//         }

//         cout << endl;
//     }    

//     return 0;
// }
