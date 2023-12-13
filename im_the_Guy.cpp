#include <iostream>
#include <set>
using namespace std;
int main() {
    int n;
    cin>>n;

    set<int> lvl;
    int p=0;
    cin>>p;
    for (int i=0; i<p; i++){
        int num;
        cin>>num;
        lvl.insert(num);
    }
    int q=0;
    cin>>q;
    for (int i=0; i<q; i++){
        int num;
        cin>>num;
        lvl.insert(num);
    }
    if (lvl.size() == n){
        cout<<"I become the guy."<<endl;
    }
    else {
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}