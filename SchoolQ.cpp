#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, t;
    cin>>n>>t;
    string s;
    cin>>s;
    while (t>0){
        for(int i=0; i<n; i++){
            if (s[i]=='B' && s[i+1]=='G'){
                swap(s[i], s[i+1]);
                i++;
                
            }
            
        }
        t--;
    }
    cout<<s<<endl;
    return 0;
}