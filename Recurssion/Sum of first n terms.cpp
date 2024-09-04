class Solution {
  public:
  long long getsum(long long n,long long& sum)
  {
      if(n==0)
      {
        return sum;
      }
      sum = sum+(n*n*n);
      getsum(n-1,sum);
      return sum;
      
  }
    long long sumOfSeries(long long n) {
        // code here
        long long sum=0;
        long long ans = getsum(n,sum);
        return ans;
    }
};