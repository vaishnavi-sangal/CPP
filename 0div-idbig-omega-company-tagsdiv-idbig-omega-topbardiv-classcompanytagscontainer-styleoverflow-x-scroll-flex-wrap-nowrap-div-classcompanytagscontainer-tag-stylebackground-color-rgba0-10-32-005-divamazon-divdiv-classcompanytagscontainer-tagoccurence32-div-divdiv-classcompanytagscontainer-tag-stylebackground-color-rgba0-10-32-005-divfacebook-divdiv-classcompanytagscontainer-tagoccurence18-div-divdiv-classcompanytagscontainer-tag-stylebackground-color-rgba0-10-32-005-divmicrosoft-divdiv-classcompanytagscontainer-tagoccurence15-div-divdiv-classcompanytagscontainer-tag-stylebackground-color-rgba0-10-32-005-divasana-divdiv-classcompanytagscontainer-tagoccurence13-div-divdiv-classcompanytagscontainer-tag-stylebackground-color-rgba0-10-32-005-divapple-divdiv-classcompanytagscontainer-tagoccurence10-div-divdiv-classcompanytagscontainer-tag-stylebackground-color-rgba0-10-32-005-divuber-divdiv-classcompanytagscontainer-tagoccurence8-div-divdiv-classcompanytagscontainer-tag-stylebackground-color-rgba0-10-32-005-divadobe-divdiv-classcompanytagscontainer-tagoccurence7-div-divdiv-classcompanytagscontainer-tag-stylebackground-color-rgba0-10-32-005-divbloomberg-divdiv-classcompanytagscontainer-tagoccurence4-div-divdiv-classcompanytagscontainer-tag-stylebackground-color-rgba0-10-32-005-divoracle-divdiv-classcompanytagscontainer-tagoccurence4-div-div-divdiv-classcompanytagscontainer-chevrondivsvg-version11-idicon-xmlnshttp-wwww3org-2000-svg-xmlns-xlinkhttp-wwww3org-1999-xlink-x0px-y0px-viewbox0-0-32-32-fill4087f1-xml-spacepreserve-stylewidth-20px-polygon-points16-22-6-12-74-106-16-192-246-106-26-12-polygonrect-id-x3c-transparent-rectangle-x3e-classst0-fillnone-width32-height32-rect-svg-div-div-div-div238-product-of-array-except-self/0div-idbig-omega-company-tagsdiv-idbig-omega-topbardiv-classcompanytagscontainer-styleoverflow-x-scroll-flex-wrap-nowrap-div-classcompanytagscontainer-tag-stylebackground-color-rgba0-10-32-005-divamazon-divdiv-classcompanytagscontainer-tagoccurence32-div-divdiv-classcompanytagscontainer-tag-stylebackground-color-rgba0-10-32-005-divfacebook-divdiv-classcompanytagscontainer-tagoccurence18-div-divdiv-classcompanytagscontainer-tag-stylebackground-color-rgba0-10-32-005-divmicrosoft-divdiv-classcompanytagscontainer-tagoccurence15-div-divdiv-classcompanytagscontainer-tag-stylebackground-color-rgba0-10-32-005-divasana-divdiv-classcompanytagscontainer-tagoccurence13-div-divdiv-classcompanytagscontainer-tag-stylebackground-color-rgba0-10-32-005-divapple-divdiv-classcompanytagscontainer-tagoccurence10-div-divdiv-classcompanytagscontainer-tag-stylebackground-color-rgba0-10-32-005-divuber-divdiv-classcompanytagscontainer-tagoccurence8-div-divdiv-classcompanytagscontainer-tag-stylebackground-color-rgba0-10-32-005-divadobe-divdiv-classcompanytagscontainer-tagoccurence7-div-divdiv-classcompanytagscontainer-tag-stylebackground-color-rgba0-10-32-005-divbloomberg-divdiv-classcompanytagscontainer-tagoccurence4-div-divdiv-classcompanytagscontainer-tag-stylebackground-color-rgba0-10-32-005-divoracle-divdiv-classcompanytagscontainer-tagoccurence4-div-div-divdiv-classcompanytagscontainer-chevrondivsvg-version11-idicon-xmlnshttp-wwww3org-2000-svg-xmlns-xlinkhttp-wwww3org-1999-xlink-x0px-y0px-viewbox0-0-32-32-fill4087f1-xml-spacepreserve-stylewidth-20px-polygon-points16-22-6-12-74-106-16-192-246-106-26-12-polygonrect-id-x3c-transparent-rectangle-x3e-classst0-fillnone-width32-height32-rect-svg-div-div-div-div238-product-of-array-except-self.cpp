class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
             vector<int> prefixProds, suffixProds(nums.size()), prods;
        int prefix=nums[0], suffix=nums[nums.size()-1];
        prefixProds.push_back(prefix);
                suffixProds[nums.size()-1]=suffix;


        for(int i=1; i<nums.size(); i++)
        {
             prefix *= nums[i];
            prefixProds.push_back(prefix);
            //prefix *= nums[i];
        }

        for(int i=nums.size()-2; i>=0; i--)
        {
             suffix *= nums[i];
            suffixProds[i] = suffix;
            //suffix *= nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            cout<<suffixProds[i]<< " ";
        }

        for(int i=0; i<nums.size(); i++)
        {
            if(i==0)
            {
                prods.push_back(suffixProds[i+1]);
            }
            else if(i>0 && i<nums.size()-1)
            prods.push_back(prefixProds[i-1]*suffixProds[i+1]);
            else
            {
                                prods.push_back(prefixProds[i-1]);

                
            }
        }

        return prods;
    }
};