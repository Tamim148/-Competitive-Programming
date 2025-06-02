class Solution {
    public:
        int scoreOfString(string s) {
            int answer=0;
            for(int i=1;i<s.length();i++)
            {
                answer=answer+abs(s[i]-s[i-1]);
    
            }
            return answer;
        }
    };