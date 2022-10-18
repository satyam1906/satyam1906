#include<iostream>
using namespace std;
#define n 100
class stack
{
    private:
    int top;
    int* arr;
    public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if(top == n-1)
        {
            cout<<"stack overflow"<<endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if(top == n-1)
        {
            cout<<"no element to pop"<<endl;
            return;
        }
        top--;
    }
    int TOP()
    {
        if(top == -1)
        {
            cout<<"no element in the stack"<<endl;
        }
        return arr[top];
    }
    bool empty()
    {
        return top = -1;
    }
};
int main()
{
    stack st;
    int arr[] = {1,2,3,4,5,6};
    for(int i=0;i<6; i++)
    {
        st.push(arr[i]);
    }
    cout<<st.TOP()<<endl;
    for(int i=0;i<5; i++)
    {
        st.pop();
    }
    cout<<st.TOP()<<endl;
    return 0;
}
