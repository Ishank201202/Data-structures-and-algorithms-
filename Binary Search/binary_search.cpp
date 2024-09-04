// 704. Binary Search
class Solution {
public:
    int recurssivebs(vector<int>& nums, int target,int l,int h)
    {
        int m=(l+h)/2;
        int ans=-1;
        if(l>h)
        {
            return -1;
        }
        if(nums[m]<target){
            ans=recurssivebs(nums,target,m+1,h);
        }
        else if(nums[m]>target){
            ans=recurssivebs(nums,target,l,m-1);
        }
        else{
            ans=m;
        }
        return ans;
    }
    int search(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        // int m=(l+h)/2;
        // int ans=-1;
        // if(nums.size()==1);
        // {
        //     if(nums[l]==target)
        //     {
        //         ans=l;
        //     }
        // }
        // while(h>=l)
        // {
        //     if(nums[m]>target)
        //     {
        //         h=m-1;
        //         m=(l+h)/2;
        //     }
        //     else if(nums[m]<target)
        //     {
        //         l=m+1;
        //         m=(l+h)/2;
        //     }
        //     else{
        //         ans=m;
        //         break;
        //     }
        // }
        // return ans;
        int ans=recurssivebs(nums,target,l,h);
        return ans;
    }
};