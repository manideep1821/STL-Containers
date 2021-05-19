#include<iostream>
#include<set>
#include<functional>
#include<string>
using namespace std;
int main()
{
    set<int>Set={1,2,3,4,5,4,5,3,2,1};
    for(auto & it :Set)
       cout<<it<<" ";
    cout<<endl;
    return 0;
}