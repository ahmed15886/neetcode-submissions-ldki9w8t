class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int l=0;
        int r=n-1;
        int max_vol=0;
        while(l<r){
            max_vol=max(max_vol,min(heights[l],heights[r])*(r-l));
            if(heights[l]<heights[r])
            l++;
            else
            r--;
        }
        return max_vol;
    }
};
