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
            max_f = *max_element(table.begin(),table.end());
            while((r-l+1) - max_f > k){
                table[s[l]-'A']--;
                max_f = *max_element(table.begin(),table.end());
                l++;
            }
            max_l = max(max_l,r-l+1);
            r++;
        }
        return max_l;
    }
};
