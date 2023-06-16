class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int elem1 = INT_MIN;
        int elem2 = INT_MIN;
        int cnt1 = 0;
        int cnt2 = 0;
        
        for (int i = 0; i < n; i++) {
            if (cnt1 == 0 && elem2 != nums[i]) {
                cnt1++;
                elem1 = nums[i];
            } else if (cnt2 == 0 && elem1 != nums[i]) {
                cnt2++;
                elem2 = nums[i];
            } else if (elem1 == nums[i]) {
                cnt1++;
            } else if (elem2 == nums[i]) {
                cnt2++;
            } else {
                cnt1--;
                cnt2--;
            }
        }
        
        int cnt3 = 0;
        int cnt4 = 0;
        
        for (int num : nums) {
            if (num == elem1)
                cnt3++;
            else if (num == elem2)
                cnt4++;
        }
        
        vector<int> result;
        if (cnt3 > n / 3)
            result.push_back(elem1);
        
        if (cnt4 > n / 3)
            result.push_back(elem2);
        
        return result;
    }
};
