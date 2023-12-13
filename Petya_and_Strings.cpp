#include <iostream>
#include <cctype> 
using namespace std;
int main() {
    string str1, str2;
    cin>>str1;
    cin>>str2;
    int ans = 0;
    int i=0;
    while (str1[i]){
        char c1 = tolower(str1[i]);
        char c2 = tolower(str2[i]);
        if (c1<c2){
            ans = -1;
            cout<<ans<<endl;
            return 0;
        }
        else if (c1>c2){
            ans = 1;
            cout<<ans<<endl;
            return 0;
        }
        i++;

    }
    cout<<ans<<endl;
    return 0;
}