#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int max=-10000;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        int s=0;
        for(int j=i;j<n;j++)
        [
            s = s + nums [j] ;
            if(s>=max)
            {
                max=sum;
            }
        ]
    }
    cout<<max;
    }
};
