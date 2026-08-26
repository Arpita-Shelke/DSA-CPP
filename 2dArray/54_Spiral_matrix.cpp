class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int t=m*n;
        vector<int> v;
        int count=0;
        int minr=0, minc=0, maxr=m-1, maxc=n-1;
        while(minr<=maxr && minc<=maxc ){
            for(int j=minc;j<=maxc &&count<t  ;j++){
                v.push_back(matrix[minr][j]);
                count++;
            }
            minr++;

            for(int i=minr; i<=maxr && count<t ;i++){
                v.push_back(matrix[i][maxc]);
                count++;
            }
            maxc--;

            for(int j=maxc; j>=minc &&count<t ;j--){
                v.push_back(matrix[maxr][j]);
                count++;
            }
            maxr--;

            for(int i=maxr; i>=minr&&count<t ;i-- ){
                v.push_back(matrix[i][minc]);
                count++;
            }
            minc++;
        }
        return v;
    }
};
