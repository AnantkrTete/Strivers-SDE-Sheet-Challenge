class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int max=INT_MIN;
        int sum=0;
        int j=0;
        int minusmax=INT_MIN;
     for(int i=0;i<a.size();i++){
         if(a[i]<0){
             j++;
         }
         if(a[i]>minusmax){
             minusmax=a[i];
         }
           
      sum=sum+a[i];
         if(sum<0){
             sum=0;
         }
         if(max<sum){
             max=sum;
         }
     }
     if(j==(a.size()-1)){
         return minusmax;
     }  
     return max; 
    }
};
