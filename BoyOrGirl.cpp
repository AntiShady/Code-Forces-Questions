#include <iostream>
#include <set>
using namespace std;
int main() {
    string usr;
    cin>>usr;
    set<char> distinct;
    for (char&c : usr){
        distinct.insert(c);
    }
    if (distinct.size()%2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}