#include<iostream>
using namespace std;
#include<vector>

void print(int i, vector<int>& arr,vector<int>& ds,int sum,int currsum)
{
    if(currsum>sum||i>arr.size())
    {
        return;
    }
    if(currsum==sum)
    {
        if(ds.size()==0)
        {
            cout<<"{}";
        }
        for(auto j:ds)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        
        return ;
    }

    ds.push_back(arr[i]);
    currsum=currsum+arr[i];
    print(i+1,arr,ds,sum,currsum);
    
    currsum=currsum-arr[i];
    ds.pop_back();
    print(i+1,arr,ds,sum,currsum);
    return ;
}
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(1);
    int sum=2;
    int currsum=0;
    vector<int> ds;
    print(0,arr,ds,sum,currsum);
}