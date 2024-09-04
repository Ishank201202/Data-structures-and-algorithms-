class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum=0;
        long long ans=0;
        for(long long i=0;i<chalk.size();i++)
        {
            sum+=chalk[i];
        }
        while(sum<k)
        {
            k=k-sum;
        }
        for(long long i=0;i<chalk.size();i++)
        {
            if(chalk[i]>k)
            {
                ans=i;
                break;
            }
            else{
                k=k-chalk[i];
            }
        }
        return ans;
    }
};
