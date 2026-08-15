class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector <int> v;
        int x = 0;
        for(int i=0;i<n;i++){
             x = x+nums[i];
             v.push_back(x);
        }
        return v;
    }
};
