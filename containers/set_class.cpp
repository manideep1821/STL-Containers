#include<iostream>
#include<algorithm>
#include<set>
#include<string>
using namespace std;
class person{
    public : 
        int age;
        string name;
    
    bool operator <  (const  person& it) const{ return age<it.age;}
    bool operator >  (const  person& it) const{ return age>it.age;}
};
int main()
{
    set<person ,std:: greater<>>set1={{20,"manideep"},{15,"sai"},{26,"nitw"}};
    for(auto & it : set1)
       cout<<it.name<<" "<<it.age<<endl;
    
    return 0;
}
