#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    int op[t];
    for (int i=0; i<t; i++){
        int nop=0;
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        for (int j=0; j<n;){
            if (s[j] == 'B'){
                // cout<<"B at :"<<j<<endl;
                s[j] = 'W';
                nop++;
                j+=k;

                
            }
            else j++;
            
            

        }
        op[i] = nop;

    }
    for (int i: op){
        cout<<i<<endl;
    }
    return 0;
}