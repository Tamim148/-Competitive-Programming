class Solution {
    public:
        int lengthOfLastWord(string s) {
            // reverse(s.begin(),s.end());
            // int ans=0;
            // int i=0;
           int n = s.size();
            int i = n - 1;
            int length = 0;
            while (i >= 0 && s[i] == ' ') i--;
            while (i >= 0 && s[i] != ' ') {
                length++;
                i--;
            }
            return length;
        
        }
    };