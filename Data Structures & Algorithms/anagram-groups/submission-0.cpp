class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>result;
        unordered_map<string,vector<string>>mp;
        for(auto s : strs){
            string freq="00000000000000000000000000";
            for(char c=0;c<s.size();c++){
                freq[int(s[c])-97]=char(int(freq[int(s[c])-97])+1);
            }
            // cout<<freq<<" ";
            mp[freq].push_back(s);
        }
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            result.push_back(it->second);
        }
        return result;
    }
};
