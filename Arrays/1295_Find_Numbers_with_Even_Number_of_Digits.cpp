class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        
        int dig = 0;
        for(int i=0;i<n;i++){
            int x = nums[i];
            int count = 0;
            while(x!=0){
                 x = x/10;
                 count++;
                
            }
           if(count%2==0)dig=dig+1;
        }
        return dig;
        
    }
};
