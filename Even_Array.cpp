#include <iostream>
#include <set>
#include <cmath>
using namespace std;
int main() {
    int t;
    cin>>t;
    int op[t];
    set<int> op1;
    for (int i=0; i<t; i++){
        int n;
        cin>>n;
        int diff = 0;
        int arr[n];
        int odd=0;
        for (int j=0; j<n; j++){
            cin>>arr[j];
            op1.insert(arr[j]);
            if (arr[j]%2 != 0){
                odd++;
            }
            if (j%2 != arr[j]%2){
                diff++;
                // cout<<"j%2 :"<<j%2<<", arr[j]%2 :"<<arr[j]%2<<endl;
            }
        }
        
        if(floor(n/2) != odd){
            op[i] = -1;
        }
        else {
            if (diff%2 == 0 && op1.size() > 1){
                op[i] = diff/2;
            }
            else if (n==1 && arr[0] == 0){
                op[i] = diff/2;
            }
        }
    }
    for (int k=0; k<t; k++){
        cout<<op[k]<<endl;
    }
    return 0;
}