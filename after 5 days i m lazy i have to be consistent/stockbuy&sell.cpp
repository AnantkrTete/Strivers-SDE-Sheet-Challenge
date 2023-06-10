class Solution {
public:
    int maxProfit(vector<int>& a) {
        int maxpro=0;
        int minprice=a[0];
        int n=a.size();
    for(int i=1;i<n;i++){
       if(a[i]<minprice){
           minprice=a[i];
       }
       else{
          maxpro=max(a[i]-minprice,maxpro);
       }
    }
    return maxpro;
    }
};
