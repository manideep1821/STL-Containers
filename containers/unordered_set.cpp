// unordered_set contains only unique elements but not in sorted
// fast in inserion , finding , removal campared to set because it uses hashing for storing data.
#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>uset={1,2,3,1,2,4,5,4};
    auto val=uset.find(4);
    if(val!=uset.end()){
        cout<<"FOUND" << " " <<*val<<endl;
    }
    else{
        cout<<"NOT FOUND" <<endl;
    }
    for(auto & it : uset){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}