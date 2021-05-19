#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    list<int>list1(n);
    for(auto & it: list1)
      cin>>it;
    list1.sort();
    list1.unique();
    for(auto & it: list1)
      cout<<it<<" ";
    
    return 0;
}