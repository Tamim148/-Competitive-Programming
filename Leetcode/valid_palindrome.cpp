// class Solution {
// public:
// string removeSpaces(string str) 
// { 
//     str.erase(remove(str.begin(), str.end(), ' '), str.end()); 
//     return str; 
// } 

//     bool isPalindrome(string s) {
//        removeSpaces(s);
//       for (auto& x : s) {
//         x = tolower(x);
//     }
//        string reverse_s=s;
//        reverse(reverse_s.begin(),reverse_s.end());
//        if(reverse_s==s)
//        {
//         return true;
//        } 
//        else return false;
//     }
// };


class Solution {
    public:
        bool isPalindrome(string s) {
            string filtered;
            for (char c : s) {
                if (isalnum(c)) {
                    filtered += tolower(c);
                }
            }
    
            int left = 0;
            int right = filtered.size() - 1;
    
            while (left < right) {
                if (filtered[left] != filtered[right]) return false;
                left++;
                right--;
            }
    
            return true;
        }
    };