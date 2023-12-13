#include <iostream>
using namespace std;
int main() {
    string s, t;
    cin>>s;
    cin>>t;
    for (int i=0, j=t.size()-1; i<s.size(); i++){
        if (s[i] != t[j]){
            // cout<<"s[i] :"<<s[i]<<", t[j] :"<<t[j]<<endl;
            cout<<"NO"<<endl;
            return 0;
        }
        j--;
    }
    cout<<"YES"<<endl;
    return 0;
}