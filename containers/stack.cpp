// stack is based on lifo--> last in first out .
#include<iostream>
#include<stack>
using namespace std;
void print(std::stack<int>stk)
{
     while(!stk.empty()){
         cout<<stk.top()<<endl;
         stk.pop();
     }   
}
int main()
{
    stack<int>stk;
    stk.push(3);
    stk.push(4);
    stk.push(5);
    print(stk);
    return 0;
}