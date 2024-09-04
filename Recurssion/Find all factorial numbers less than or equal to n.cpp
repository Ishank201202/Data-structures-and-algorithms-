class Solution {
  public:
  long long getfact(long long n,long long& fact)
  {
      if(n==0)
      {
          return fact;
      }
      fact=fact*n;
      getfact(n-1,fact);
      return fact;
  }
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        long long i=1;
        
        vector<long long> ans;
        while(i)
        {
           long long product=1;
           long long fact=getfact(i,product);
           if(fact<=n){
            ans.push_back(fact);
           }
           else if(fact>n){
            break;   
           }
           i++;
        }
        return ans;
    }
};