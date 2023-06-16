class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int elem;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                cnt++;
                elem=nums[i];
            }
            else if(elem==nums[i]){
                cnt++;
            }
            else{cnt--;}

        }
        return elem;
    }
};
//THIS ONE WAS LIKE HOW WILL I COME UP WITH THAT INSTUTION WISE WAS GENIUS PLAYTHROUGH UNDERSTOOD BY MAING A GRAPH OF INCREASING AND DECREASING FUNCTION, ITS A GOOD PROBLEM HOPEFULLY THE NEXT THIS TYPE OF QUESTION I QILL SOLVE BY MYSELF.
