class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>result;
        unordered_map<int,int>mp;
        for(auto num : nums){
            mp[num]++;
        }
        vector<pair<int,int>>buc;
        for(auto it : mp){
            buc.push_back({it.second,it.first});
        }
        sort(buc.rbegin(),buc.rend());
        for(int i=0;i<buc.size();i++)
        cout<<"key= "<<buc[i].first<<" value= "<<buc[i].second<<endl;
        for(int i=0;i<k;i++){
            result.push_back(buc[i].second);
        }
        return result;
    }
};
