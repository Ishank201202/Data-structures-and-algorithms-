class Solution {
public:
    bool canJump(vector<int>& nums) {
        bool flag=true;
        int max_idx=0;
        for(int i=0;i<nums.size();++i)
        {
            int idx=i;
            if(i<=max_idx){
                idx=idx+nums[i];
                max_idx=max(idx,max_idx);
            }
            else{
                flag=false;
                break;
            }
        }
        return flag;
    }
};
