class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n=words.size();
        
        int m=0;
        vector<int>bits;
   //     vector<string>m(words.size());
        for(int i=0;i<n;i++)
        {
            int mask=0;
            for(int j=0;j<words[i].length();j++)
            {
                mask|=1<<(words[i][j]-'a');
            }
            bits.push_back(mask);
         }
        for(int i=0;i<bits.size();i++)
        {
            for(int j=i+1;j<bits.size();j++)
            {
                
                if(!(bits[i]&bits[j]))
                {
                   int  p=words[i].length()*words[j].length();
                    
               m=(m<p)?p:m;
                }
            }
          
            
        }
        return m;
    }
};