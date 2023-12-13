#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void display(vector<int> a){
    for (int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int t;
    cin>>t;
    int op[t];
    for (int i=0; i<t; i++){
        int n, k;
        cin>>n>>k;
        vector<int> a;
        vector<int> b;
        for (int i=0; i<n; i++){
            int num;
            cin>>num;
            a.push_back(num);
        }
        
        for (int i=0; i<n; i++){
            int num;
            cin>>num;
            b.push_back(num);
        }
        
        sort(a.begin(), a.end());
        // display(a);
        std::sort(b.begin(), b.end(), std::greater<int>());
        // display(b);
        for (int i=0; i<k; i++){
            if (a[i]<b[i]){
                swap(a[i], b[i]);
            }
        }
        
        int sum=0;
        for (int i=0; i<n; i++){
            sum+=a[i];
        }
        op[i] = sum;
        // cout<<"Sum :"<<sum<<endl;

    }
    for (int i=0; i<t; i++){
        cout<<op[i]<<endl;
    }
    return 0;
}