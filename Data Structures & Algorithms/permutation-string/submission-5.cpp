class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size() < s1.size())
        return false;
        int l=0;
        int r=0;
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        for(int i=0;i<s1.size();i++,r++){
            freq1[s1[i]-'a']++;
            freq2[s2[i]-'a']++;
        }
        if(s1.size() == s2.size()){
            int i;
            for(i=0;i<s1.size();i++){
                if(freq1[i] != freq2[i])
                break;
            }
            if(i>s1.size())
            return true;
        }
        while(r<=s2.size()){
            int i;
            for(i=0;i<26;i++){
                if(freq1[i]!=freq2[i]){
                    break;
                }
            }
            if(i==26)
            return true;
            freq2[s2[l++]-'a']--;
            freq2[s2[r++]-'a']++;
        }
        return false;
    }
};
