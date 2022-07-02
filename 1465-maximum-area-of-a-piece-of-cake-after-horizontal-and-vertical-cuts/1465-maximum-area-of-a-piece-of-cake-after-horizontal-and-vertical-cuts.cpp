
class Solution {
public:
    int maxArea(int h, int w, vector<int>& hCuts, vector<int>& vCuts) {
        sort(hCuts.begin(), hCuts.end());
        sort(vCuts.begin(), vCuts.end());
        // first finding the two edge difference
        int hDiff=max(hCuts[0],h-hCuts.back()), vDiff= max(vCuts[0],w-vCuts.back());
        // now finding the difference of each horizontal cuts
        for(int i=1;i<hCuts.size();i++){ 
            hDiff=max(hDiff,hCuts[i]-hCuts[i-1]);
        }
        // now finding the difference of each horizontal cuts
        for(int i=1;i<vCuts.size();i++){ 
            vDiff=max(vDiff,vCuts[i]-vCuts[i-1]);
        }
        long long ans=(1ll*hDiff*vDiff); // to avoid int overflow
        int mod=1e9+7;
        return ans%mod;
    }
};