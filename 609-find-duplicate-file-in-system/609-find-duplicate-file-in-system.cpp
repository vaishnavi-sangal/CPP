class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
            vector<vector<string>>ans;
            map<string, vector<string>>mp;
            for(auto &path : paths)
            {
                    string s = path;
                    string dir = "";
                    int i = 0;
                    int n = path.size();
                    while(i < n && path[i] != ' ')
                    {
                            dir += path[i];     
                            i++;
                    }
                    
                    
                    
         while(i < n)
                   
         {
                 string file = "/";
                 i++;
                 
                 while(i < n && s[i] != '(')
                    {
                            file += s[i];
                            i++;
                    }
                    
                    string content = "";
                 i++;
                    while(i < n && s[i] != ')')
                    {
                           content += s[i];
                            i++;
                    }
                 i++;
                mp[content].push_back(dir + file);
                
         }
           
                    
            }
            for(auto &it : mp)
            {
                    auto list = it.second;
                    
                    if(list.size() > 1)
                    {
                         ans.push_back(list);   
                    }
                            
            }
                    
            return ans;
        
    }
};