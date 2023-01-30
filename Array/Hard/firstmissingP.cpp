int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>s;
            int n=nums.size();
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }  
        int i=1;
        while(s.find(i)!=s.end())
           {
               i++;
           }  
           return i;  
    }