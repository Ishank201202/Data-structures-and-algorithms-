// Print 1 To N Without Loop
//{ Driver Code Starts


// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void print(int N,int i)
    {
        if(N==0)
        {
            return;
        }
        cout<<i<<" ";
        print(N-1,i+1);
    }
    void printNos(int N)
    {
        //Your code here
        print(N,1);
    }
};
