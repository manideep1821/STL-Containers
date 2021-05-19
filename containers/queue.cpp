#include<iostream>
#include<queue>
using namespace std;
void print (queue<int>que)
{
     while(!que.empty()){
         cout<<que.front()<<endl;
         que.pop();
     }
}
int main()
{
    queue<int>que;
    que.push(5);
    que.push(7);
    que.push(8);
    print(que);
    return 0;
}