#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;

    int rem=0;
    for (int i=0; i<n; i++){
        if (s[i+1] == s[i]){
            rem++;
            s[i]='1';
        }
    }
    cout<<rem<<endl;
    return 0;
}