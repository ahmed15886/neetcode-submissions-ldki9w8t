class Solution {
public:
    string sep = "!#%!";
    string encode(vector<string>& strs) {
        string result = "";
        for(string s : strs){
            result += s + sep;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string>result;
        int i=0,j=0;
        string sofar="",missed="";
        while(i<=s.size()){
            if(j==sep.size()){
                result.push_back(sofar);
                sofar = "";
                j=0;
                missed="";
            }
            if(s[i]!=sep[j]){
                if(j!=0){
                    sofar += missed;
                    missed = "";
                    j=0;
                }
                sofar += s[i];
                i++;
                j=0;
            }
            else{
                missed += s[i];
                i++;
                j++;
            }
        }
        return result;
    }
};
