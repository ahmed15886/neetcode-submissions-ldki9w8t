class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;
        unordered_map<int,int>seen;
        for(int i=0;i<nums.size();i++){
            int diff = target-nums[i];
            if(seen.find(diff) == seen.end()){
                seen.insert({nums[i],i});
            }
            else{
                auto j = seen.find(diff);
                result.push_back(seen[diff]);
                result.push_back(i);
                return result;
            }
        }
        return result;
    }
};
