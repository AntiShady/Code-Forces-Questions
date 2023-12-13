#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    string concat;
    for (int i=0; i<s.size(); i++){
        if (s[i] == '.'){
            concat+='0';
        }
        else{
            i++;
            if (s[i] == '.'){
                concat+='1';
            }
            else {
                concat+='2';
            }
        }
    }
    cout<<concat<<endl;
    return 0;
}