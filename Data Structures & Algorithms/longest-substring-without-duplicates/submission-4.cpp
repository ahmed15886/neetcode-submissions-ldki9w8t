class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0)
        return 0;
        set<char>dup;
        int l=0;
        int r=0;
        int length=0;
        while(r<s.size()){
            if(dup.find(s[r])!=dup.end()){
                while(l<r){
                    if(s[l]==s[r]){
                        l++;
                        break;
                    }
                    dup.erase(s[l]);
                    l++;
                }
            }
            length=max(length,r-l+1);
            dup.insert(s[r]);
            r++;
        }
        return length;
    }
};
