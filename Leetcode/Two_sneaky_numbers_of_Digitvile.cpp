class Solution {
    public:
    unordered_map<int, int> hm;
    void countFreq(vector<int>& nums)
    {
      
        for (int i=0; i<nums.size(); i++)
            hm[nums[i]]++;
    }
    
    int query(int x)
    {
        return hm[x];
    }
        vector<int> getSneakyNumbers(vector<int>& nums)     
        {
            
            set<int>s;
            countFreq(nums);
            for(int i=0;i<nums.size();i++)
            {
                if(query(nums[i])==2)
                {
                    s.insert(nums[i]);
                }
            }
    
            vector<int>ans(s.begin(),s.end());
            return ans;
        }
    };
    
    
    
    
    
    
     