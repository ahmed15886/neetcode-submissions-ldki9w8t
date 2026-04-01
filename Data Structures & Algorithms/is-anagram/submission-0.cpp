class Solution {
public:
    bool isAnagram(string s, string t) {
        int count_S[26],count_T[26];
        for(int i=0;i<26;i++){
            count_S[i]=0;
            count_T[i]=0;
        }
        for(char c : s){
            count_S[int(c)-97]++;
        }
        for(char c : t){
            count_T[int(c)-97]++;
        }
        for(int i=0;i<26;i++){
            if(count_S[i]!=count_T[i])
            return false;
        }
        return true;
    }
};
