#include <iostream>
using namespace std;
int main() {
    int k, n, w;
    cin>>k>>n>>w;
    int left = n - k*(w*(w+1)/2);
    if (left<0){
        cout<<abs(left)<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}