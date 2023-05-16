class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for(int i = 0; i<tokens.size(); i++){
            if(tokens[i]=="+"|| tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                int v1 = s.top();
                s.pop();
                int v2 = s.top();
                s.pop();
                
                if(tokens[i]=="+"){
                    s.push(v2+v1);
                }else if(tokens[i]=="-"){
                    s.push(v2-v1);
                }else if(tokens[i]=="*"){
                    s.push(v2*v1);
                }else if(tokens[i]=="/"){
                    s.push(v2/v1);
                }
            }
            else{
                s.push(atoi(tokens[i].c_str()));
            }
        }
        return s.top();
    }
};