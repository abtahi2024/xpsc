#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        int cont = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            int val = cont + (!a.empty() && a.back() > x);
            if (val == 0 || (val == 1 && x <= a[0]))
            {
                a.push_back(x);
                cont = val;
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }

    return 0;
}