#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
	int search(string a, string b)
	{
	    vector<int>p(26,0);
	    vector<int>w(26,0);
	    int cunt=0;
	    int n=a.size(),m=b.size();
	    for(char ch:a)
	    {
	        p[ch-'a']++;
	    }
	    for(int i=0;i<n;i++)
	    {
	        w[b[i]-'a']++;
	    }
	    if(w==p)
	    {
	        cunt++;
	    }
	    for(int i=n;i<m;i++)
	    {
	        w[b[i]-'a']++;
	        
	        w[b[i-n]-'a']--;
	        
	         if(w==p)
	        {
	            cunt++;
	        }
	    }
	   
	    
	    return cunt;
	}

};
int main()
{
  


    return 0;
}