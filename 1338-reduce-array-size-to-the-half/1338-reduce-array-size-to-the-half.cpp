class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        multimap<int,int>m;
        for(auto c:mp)
        {
            m.insert({c.second,c.first});
            // 3 2
            // 1 7
            // 3 5
            // 4 3
            
            // 1 7
            // 3 2
            // 3 5
            // 4 3
            
        }
        int ans=n;
        int count=0;
        for(auto  i=m.rbegin();i!=m.rend();i++)
        {
            ans-=i->first;
            cout<<ans<<" ";
            count++;
          //  cout<<count<<" ";
            if(ans<=n/2)
            {
                return count;
            }
        }
        return count;
    }
};