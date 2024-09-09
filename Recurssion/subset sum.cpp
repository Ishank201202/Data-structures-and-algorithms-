class Solution
{
public:
    void helper(vector<int> &arr,int N,int index,int sum,vector<int> &subsets)
    {
        if(index==N)
        {
            subsets.push_back(sum);
            return;
        }
        helper(arr,N,index+1,sum+arr[index],subsets);
        helper(arr,N,index+1,sum,subsets);
        
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> subsets;
        helper(arr,N,0,0,subsets);
        sort(subsets.begin(),subsets.end());
        return subsets;
        
    }
};