class Solution {
    public:
        bool isValid(string s) {
            stack<char> s1;
            for (char c : s) {
                if (c == '(' || c == '{' || c == '[') {
                    s1.push(c);
                }
    
                else {
                    if (s1.empty()) return false;
    
                    char t = s1.top();
                    s1.pop();
                    if (c == ')') {
                        if (t != '(') return false;
                    }
                    else if (c == '}') {
                        if (t != '{') return false;
                    }
                    else if (c == ']') {
                        if (t != '[') return false;
                    }
                }
            }
    
            if (s1.empty()) return true; 
            else return false;
        }
    };