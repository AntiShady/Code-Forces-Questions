#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    int op[t];
    for (int i=0; i<t; i++){
        int n;
        cin>>n;
        int a[n];
        for (int j=0; j<n; j++){
            cin>>a[j];
        }
        auto max_elt = std::min_element(a, a + n);
        int index = std::distance(a, max_elt);
        a[index] += 1;

        int prod = 1;
        for (int i=0; i<n; i++){
            prod*=a[i];
        }
        op[i] = prod;
    }

    for (int i=0; i<t; i++){
        cout<<op[i]<<endl;
    }
    return 0;
}