class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

//sort(nums.begin(),nums.end());  // 0 0 1 1 1 2 2 3 4 
        int c=0;
        set<int>s;  
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        vector<int>v;
        for(auto it:s)
        {
            v.push_back(it);
        }
        
        int n=v.size();
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==1)
            {
                c=i;   
            }
        }
        int i=1;
   
        for(i=1;i<50000000 && c<v.size();i++)
        {
         
            if(i!= v[c++])
            {
             return i;
                break;
                
            }
        
            
        }
      
        return i;
        
    }
};