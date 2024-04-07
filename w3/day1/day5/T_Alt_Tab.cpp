#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    stack<string>s;
    for(int i=0;i<n;i++)
    {
        string pro;
        cin>>pro;
        s.push(pro);
    }

    set<string>st;
    while(!s.empty())
    {
        if(st.find(s.top())==st.end())
        {
            st.insert(s.top());

           string ph=s.top();

           if(ph.size()>2)
           {
            cout<<ph.substr(ph.size()-2);
           }
        }

        s.pop();
    }


    return 0;
}

