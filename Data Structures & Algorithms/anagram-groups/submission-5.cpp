class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>result;
        unordered_map<string,vector<string>>mp;
        for(const auto &s : strs){
            string freq(26, '0');
            for(auto c : s){
                freq[c-'a']=char(int(freq[c-'a'])+1);
            }
            mp[freq].push_back(s);
        }
        for (auto p : mp) {
            result.push_back(p.second);
        }
        return result;
    }
};
