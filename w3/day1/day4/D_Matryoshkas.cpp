#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        multiset<ll>ms;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++)
        {
            ms.insert(a[i]);
        }

        int cunt=0;
        while(!ms.empty())
        {
            auto it=ms.begin();
            int curr=*it;
            ms.erase(it);
            while(ms.find(curr+1)!=ms.end())
            {
                ms.erase(ms.find(curr+1));
                curr++;
            }
            cunt++;
        }
      
        cout<<cunt<<endl;
        
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
//         vector<int> a(n);
//         for(int i = 0; i < n; i++) {
//             cin >> a[i]; // Read input into the vector
//         }
//         sort(a.begin(), a.end()); // Sort the vector
        
//         multiset<int> ms;
//         for(int i = 0; i < n; i++) {
//             ms.insert(a[i]); 
//         }
        
//         int sets = 0; // Initialize the number of sets
//         for(int i = 0; i < n; i++) {
//             if (ms.count(a[i]) > 0) { // If the element is still present in the multiset
//                 int current = a[i]; // Current size of the doll
//                 ms.erase(ms.lower_bound(current)); 
//                 while(ms.count(current + 1) > 0) {
//                     current++; 
//                     ms.erase(ms.lower_bound(current)); 
//                 }
//                 sets++; 
//             }
//         }
//         cout << sets << endl; 
//     }
//     return 0;
// }
