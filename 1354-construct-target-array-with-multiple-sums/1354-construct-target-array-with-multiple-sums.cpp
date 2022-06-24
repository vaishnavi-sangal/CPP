
class Solution {
public:
    bool isPossible(vector<int>& target) {
        //  if(target.size() == 1) return target[0] == 1;
    long   sum=0;
        priority_queue<int>pq;
        for(long  it:target)
        {
pq.push(it);
            sum+=it; /// sum=17
        //    pq.push((long)it);
        }
        while(pq.top()!=1)
        {
            long t=pq.top();
        //    pq.pop();
            /// 3 5 
       sum-=t;
             pq.pop();
            /// sum=17-9 = 8
            if(sum<=0 || t<=sum)
            {
                return false;
            }
            t=t%sum;
            sum+=t;
            pq.push(t>0?t:sum);
            
        }
        return true;
        
    }
};
