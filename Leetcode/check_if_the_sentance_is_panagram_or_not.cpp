class Solution {
    public:
        bool checkIfPangram(string sentence) {
            int freq[26] = {0}; 
            if(sentence.size()<=25)
            {
                return false;
            }
            for (char c : sentence) {
                freq[c - 'a']++;
            }
    
            for(int i=0;i<26;i++)
            {
                if(freq[i]<1)
                {
                    return false;
                }
            }
    
            return true;
        }
    };