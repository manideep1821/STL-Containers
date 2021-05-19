#include<iostream>
#include<array>
using namespace std;
int main()
{
    std::array<int, 5>arr;
    arr={1,2,3,4,5};
    cout<<arr.at(2);
    for(int i=0;i<5;i++)
    {
        cout<<arr.at(i);
    }
    // cout<<arr.data();
    return 0;
}
