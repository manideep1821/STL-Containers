// multimap is the best way to use instead of vector in map
// it contain functions like upper_bound() , lower_found() , find() , equal_range() .
#include<bits/stdc++.h>
using namespace std;
int main(){
    multimap<char , int>Multimap;
    Multimap.insert(make_pair('a',2));
    Multimap.insert(make_pair('a',3));
    Multimap.insert(make_pair('a',4));
    Multimap.insert(make_pair('b',5));
    Multimap.insert(make_pair('b',6));
    for(auto & it: Multimap)
        cout<<it.first<<" "<<it.second<<endl;
        cout<<endl<<endl;
                                          
   // auto temp =Multimap.lower_bound('a');
   //    cout<<temp->first<<" "<<temp->second<<endl;      // gives the strating value of the charcter
   //  cout<<endl<<endl;
  //  auto range =Multimap.upper_bound('a');
   //    cout<<range->first<<" "<<range->second<<endl;

   auto range =Multimap.equal_range('a');
   for(auto it=range.first;it!=range.second;++it){
       cout<<it->first<<" "<<it->second<<endl;
   }
    return 0;
}