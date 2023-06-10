class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
       int n= a.size();
       sort(a.begin(),a.end());
       vector<vector<int>> b;
       for(int i=0;i<n;i++){
           if(b.empty() || a[i][0]>b.back()[1]){
               b.push_back(a[i]);
           }
           else{
               b.back()[1]=max(b.back()[1],a[i][1]);
           }
       }
       return b;
    }
};
