#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int up=0, lo=0;
    for (int i=0; i<s.size(); i++){
        if (isupper(s[i])){
            up++;
        }
        else{
            lo++;
        }
    }
    if (up>lo){
        for(char&c : s){
            c = toupper(c);
        }
    }
    else {
        for(char&c : s){
            c = tolower(c);
        }
    }
    cout<<s<<endl;
    return 0;
}