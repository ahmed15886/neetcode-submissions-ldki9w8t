class Solution {
public:

    bool isOperator(string s){
        return (s.size()==1 && (s[0] =='+' || s[0] == '-' || s[0] == '*' || s[0] == '/'));
    }
    int evalExp(int a,int b, char c){
        if(c == '+')
        return b+a;
        if(c == '-')
        return b-a;
        if(c == '*')
        return b*a;
        return b/a;
    }

    int evalRPN(vector<string>& tokens) {
        stack<int>tok;
        for(string s : tokens){
            if(isOperator(s)){
                int a = tok.top();
                tok.pop();
                int b = tok.top();
                tok.pop();
                int val = evalExp(a,b,s[0]);
                tok.push(val);
            }
            else{
                tok.push(stoi(s));
            }
        }
        return tok.top();
    }
};