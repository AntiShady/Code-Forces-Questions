#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    string op[t];
    for (int i=0; i<t; i++){
        string s;
        cin>>s;
        if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c'){
            op[i] = "YES";
        }
        else {
            op[i] = "NO";
        }
    }
    for (int i=0; i<t; i++){
        cout<<op[i]<<endl;
    }
    return 0;
}