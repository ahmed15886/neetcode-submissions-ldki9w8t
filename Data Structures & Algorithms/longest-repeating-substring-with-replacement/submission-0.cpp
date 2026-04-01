class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int r=0;
        int max_l=0;
        int max_f=0;
        vector<int>table(26,0);
        while(r<s.size()){
            table[s[r] - 'A']++;
            auto it = max_element(table.begin(),table.end());
            max_f= *it;
            if((r-l+1) - max_f <= k)
            max_l = max(max_l,r-l+1);
            else{
                while((r-l+1) - max_f > k){
                    table[s[l]-'A']--;
                    auto it = max_element(table.begin(),table.end());
                    max_f= *it;
                    l++;
                }
            }
            r++;
        }
        return max_l;
    }
};
