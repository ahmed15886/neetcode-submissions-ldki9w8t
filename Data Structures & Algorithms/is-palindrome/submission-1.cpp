class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0;i<s.size();){
            if(isalnum(s[i])){
                s[i]= tolower(s[i]);
                i++;
            }
            else
            s.erase(i, 1);
        }
        int i=0,j=s.size()-1;
        while(i<=j){
            if(s[i]!=s[j])
            return false;
            i++;
            j--;
        }
        cout<<s<<" ";
        return true;
    }
};
