// time complexity  is 2^n * n and space complexity is o(n)
#include<iostream>
using namespace std;
#include<vector>

void print(int i, vector<int>& arr,vector<int>& ds)
{
    if(i==arr.size())
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
    print(i+1,arr,ds);
    ds.pop_back();
    print(i+1,arr,ds);
    return ;
}
int main()
{
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(2);
    vector<int> ds;
    print(0,arr,ds);
}