
   class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> v;
        string first=words[0];
        for(char x:first){
            string c="";
            c+=x;
            bool f=false;
            for(int i=1;i<words.size();i++){
                auto found=words[i].find(c);
                if(found!=-1)
                {f=true; 
                 words[i][found]='3';}
                else
                { f=false; break;}
                
            }
            if(f==true){
                v.push_back(c);
        }
        }
        return v;
  
    }
};