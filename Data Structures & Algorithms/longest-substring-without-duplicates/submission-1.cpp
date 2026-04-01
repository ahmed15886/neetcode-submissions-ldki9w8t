class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0)
        return 0;
        set<char>dup;
        int l=0;
        int r=0;
        int length=1;
        while(r<s.size()){
            if(dup.find(s[r])!=dup.end()){
                // l++;
                while(l<r){
                    if(s[l]==s[r]){
                        l++;
                        break;
                    }
                    dup.erase(s[l]);
                    l++;
                }
                dup.insert(s[r]);
            }
            else{
                dup.insert(s[r]);
                length=max(length,r-l+1);
            }
            r++;
        }
        return length;
    }
};
