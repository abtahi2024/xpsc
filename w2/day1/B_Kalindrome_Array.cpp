#include <bits/stdc++.h>
using namespace std;
bool palindrom(vector<int> a)
{
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[n - 1])
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        if (palindrom(a))
        {
            cout << "YES" << endl;
            continue;
        }

        bool flag = false;

        for (auto it : mp)
        {
            if (it.second >= 1)
            {
                vector<int> tmp;
                for (int i = 0; i < n; i++)
                {
                    if (a[i] != it.first)
                    {
                        tmp.push_back(a[i]);
                    }
                }

                if (palindrom(tmp))
                {
                    flag = true;
                    // break;
                }
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
