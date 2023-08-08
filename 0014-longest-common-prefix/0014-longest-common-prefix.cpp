



class Solution {
public:

    string longestCommonPrefix(vector<string>& arr) {
        sort(arr.begin(),arr.end());
        string s1=arr[0];
        int N=arr.size();
        string s2 = arr[N-1];
        // note it will sort in alphabetical order not according to the size of the string........
        string s = "";
        for(int i=0; i<s1.size();i++){
            if(s1[i]==s2[i]){
                s.push_back(s1[i]);
            }
            else break;
        }
        if(s.size()!=0) return s;
        else return "";
    }
};