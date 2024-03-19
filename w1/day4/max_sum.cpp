#include<bits/stdc++.h>
using namespace std;
int main()
{
  


    return 0;
}
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        int l=0,r=0;
        long long int sum=0,ans=0;
        while(r<N)
        {
            sum+=Arr[r];
            if((r-l+1)==K)
            {
                ans=max(ans,sum);
                sum-=Arr[l];
                l++;
                r++;
            }
            else
            {
                r++;
            }
        }
        return ans;
    }
};