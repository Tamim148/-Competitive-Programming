class Solution {
    public:
        bool isPalindrome(int x) {
            
            
                string s=to_string(x);
    
                string reversed_s=to_string(x);
                reverse(reversed_s.begin(),reversed_s.end());
                if(s==reversed_s)
                {
                    return true;
                }
                else
                {
                    return false;
                }
    
                // return true;
    
            
        }
    };