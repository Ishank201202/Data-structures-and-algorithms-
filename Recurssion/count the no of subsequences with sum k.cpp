#include<iostream>
using namespace std;
#include<vector>

int print(int i, vector<int>& arr,vector<int>& ds,int sum,int currsum,int count)
{
    if(currsum>sum||i>arr.size())
    {
        return count;
    }
    if(currsum==sum)
    {
        count++;
        return count;
    }

    ds.push_back(arr[i]);
    currsum=currsum+arr[i];
    count =print(i+1,arr,ds,sum,currsum,count);
    
    currsum=currsum-arr[i];
    ds.pop_back();
    count = print(i+1,arr,ds,sum,currsum,count);
    return count;
}
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(1);
    int sum=2;
    int currsum=0;
    int count =0;
    vector<int> ds;
    count = print(0,arr,ds,sum,currsum,count);
    cout<<count;
}