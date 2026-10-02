class Solution {
public:
    bool isValid(string s) {
        stack<char> in;
        stack<char> close;
        for(char c : s){
            in.push(c);
        }
        while(!in.empty()){
            switch(in.top()){
                case ')':
                case '}':
                case ']':
                    close.push(in.top());
                    in.pop();
                    break;
                case '(':
                    if(!close.empty() && close.top()==')') {close.pop(); in.pop();}
                    else return false;
                    break;
                case '{':
                    if(!close.empty() && close.top()=='}') {close.pop(); in.pop();}
                    else return false;
                    break;
                case '[':
                    if(!close.empty() && close.top()==']') {close.pop(); in.pop();}
                    else return false;
                    break;
            }
        }
        if(close.empty()) return true;
        return false;
    }
};