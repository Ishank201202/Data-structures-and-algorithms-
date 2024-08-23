//leetcode 455. Assign Cookies

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count =0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int ptrg=0;
        int ptrs=0;
        int n = max(g.size(),s.size());
        while(ptrs != n){
            if(ptrg==g.size() || ptrs==s.size())
            {
                break;
            }

            if(s[ptrs]>=g[ptrg])
            {
                count++;
                ptrg++;
                ptrs++;
            }
            else
            {
                ptrs++;
            }
        }
        return count;
    }
};