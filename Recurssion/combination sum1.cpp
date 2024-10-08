class Solution {
public:
    void helper(int ind, vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int>& ds){
        if(ind==candidates.size())
        {
            if(target==0)
            {
                ans.push_back(ds);
            }
            return;
        }
        if(candidates[ind]<=target)
        {
            ds.push_back(candidates[ind]);
            helper(ind,candidates,target-candidates[ind],ans,ds);
            ds.pop_back();
        }
        helper(ind+1,candidates,target,ans,ds);
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        helper(0,candidates,target,ans,ds);
        return ans;
    }
};