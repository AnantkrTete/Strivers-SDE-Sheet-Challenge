class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int n=nums.size()-1;
       sort(nums.begin(),nums.end());
       int temp=nums[0];
       for(int i=1;i<=n;i++){
           if(nums[i]==temp){
               return temp;
           }
           else{
               temp=nums[i];
           }
       }
       return -1; 
    }
};
