class Solution {
public:
    void revPart(int i, int j, vector <int> &a){
        while(i<=j){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;

            i++;
            j--;
        }
        return;
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k>n) k%=n;

        revPart(0,n-k-1,nums);
        revPart(n-k,n-1,nums);
        revPart(0,n-1,nums);
    }
};
