class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans;
        int x=0;
        int a = 0;
        for(int i = 0;i<2*n;i++){
           if(i<n){
           x = nums[i];
           ans.push_back(x);
           }
           if(i>=n){
            a = i-n;
           x = nums[a];
           ans.push_back(x);
           }
        }
        return ans;
    }
};
