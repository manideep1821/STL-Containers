// adding vector into a map 
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string ,vector<int>,greater<>>Map;
    Map["hii"].push_back(120);
    Map["aaa"].push_back(100);
    Map["hii"].push_back(140);
    for(auto & it : Map){
        cout<<it.first<<" ";
        for(auto & i : it.second){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}