#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string , int,greater<>>Map;
    Map["mani"]=81818;
    Map["hellow"]=91829;
    Map["hi"]=92922;
    Map.insert(make_pair("kkk",1100));
    for(auto & it : Map){
        cout<< it.first<<" "<<it.second<<" "<<endl;
    }
    cout<<Map["hi"]<<endl;
}
