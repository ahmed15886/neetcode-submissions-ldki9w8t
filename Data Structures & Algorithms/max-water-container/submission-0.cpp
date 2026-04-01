class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int max_vol=0;
        int curr_vol=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                curr_vol=min(heights[i],heights[j])*(j-i);
                max_vol=max(curr_vol,max_vol);
            }
        }
        return max_vol;
    }
};
