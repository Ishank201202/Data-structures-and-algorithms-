#include<iostream>
#include<stack>
using namespace std;

class Stack{
public:
    int *arr;
    int top;
    int size;

    Stack (int size){
        this->size=size;
        arr = new int[size];
        top=-1;
    }
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }else{
            cout<<"stack overflow";
        }
    }
    void pop(){
        if(top>-1)
        {
            top--;
        }else{
            cout<<"stack underflow";
        }
    }
    bool empty(){
        if(top==-1) return true;
        else return false;
    }
    int peek(){
        if(top>-1){
            return arr[top];
        }else{
            return -99999999;
        }
    }
};
int main()
{
    Stack  st(5);

    st.push(10);
    st.push(20);
    st.push(30);
    st.pop();
    cout<<st.peek();
    if(st.empty())
    {
        cout<<"empty";
    }else{
        cout<<"not empty";
    }
}