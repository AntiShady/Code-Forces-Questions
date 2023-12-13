#include <iostream>
using namespace std;
int main() {
    int n, h;
    cin>>n>>h;
    int frns[n];
    int ans=0;
    for (int i=0; i<n; i++){
        cin>>frns[i];
        if (h-frns[i] >= 0){
            ans++;
        }
        else{
            ans+=2;
        }
    }
    cout<<ans<<endl;
    return 0;
}