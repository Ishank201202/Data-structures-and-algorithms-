// geek for geeks Shortest Job first

class Solution {
  public:
    long long solve(vector<int>& bt) {
        // code here
        int wt=0;
        int totalwt=0;
        sort(bt.begin(),bt.end());
        for(int i=1;i<bt.size();i++)
        {
            wt=wt+bt[i-1];
            totalwt=totalwt+wt;
        }
        return totalwt/bt.size();
    }
};