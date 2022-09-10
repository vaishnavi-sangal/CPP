class Solution {
public:
    string frequencySort(string s) {
        map<char, int> m1;
        multimap<int, char, greater<int>> m2;
        
        for(auto i: s) {
            m1[i]++;
        }
        
        for(auto i: m1) {
            m2.insert({i.second, i.first});
        }
        
        string res = "";
        
        for(auto i: m2) {
            for(int j = 0; j<i.first ; j++) {
                res += i.second;
            }
        }
        
        return res;
    }
};