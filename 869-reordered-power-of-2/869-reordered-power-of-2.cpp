class Solution {
public:
    bool reorderedPowerOf2(int n) {
     string str=to_string(n);
        sort(str.begin(),str.end());
        for(int i=0;i<30;i++)
        {
            string s=to_string((int)pow(2,i));
            sort(s.begin(),s.end());
            if(s==str)
                return true;
            
        }
        return false;
    }
};