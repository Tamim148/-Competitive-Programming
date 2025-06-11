class Solution {
    public:
        int maxDifference(string s) {
            int freq[26] = {0}; 
            int max_odd = 0;
            int max_even = s.size();
    
            for (char c : s) {
                freq[c - 'a']++;
            }
    
            for (int i = 0; i < 26; i++) {
                int a = freq[i];
                if (a % 2 == 0 && a > 0) {
                    max_even = min(max_even, a);
                } else if (a % 2 == 1) {
                    max_odd = max(max_odd, a);
                }
            }
    
            // if (max_odd == 0 || max_even == 0) return 0;
    
            return max_odd - max_even;
        }
    };
    