class Solution {
public:
    int minSwaps(string s) {
        stack<char> st;
        int ct = 0; 
        for(auto &e : s){
            if(e==']'){
                if(!st.empty() && st.top()=='[') st.pop();
                else ct++;
            }
            else st.push(e);
        }
        // eta swap t 2 ta pair balance hoi.. so no_of_mis_match/2
        return (ct + 1)/2;
    }
};