#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long t;
    cin>>t;
    // cout<<"t :"<<t<<endl;
    long long A[t];
    for (long long i=0; i<t; i++){
        cin>>A[i];
    }

    for (long long i=0; i<t; i++){
        long long num = A[i];
        long long op[num];
        long long mid = num/2;
        // cout<<"num :"<<num<<", mid :"<<mid<<endl;
        
        for (long long i=0; i<mid; i++){
            op[i] = 2*(i+1);
        }
        long long sumE = mid*(mid+1);
        for (long long i=mid, j=0; i<num-1; i++){
            op[i] = 2*j + 1;
            j++;
        }
        
        long long sumO = pow((num-1)-mid, 2);
        // cout<<"sumO :"<<sumO<<", sumE :"<<sumE<<endl;
        if ((sumE-sumO)%2 == 0){
            
            cout<<"NO"<<endl;
        }
        else {
            op[num-1]=sumE-sumO;
            // cout<<"Last elt :"<<op[num-1]<<endl;
            cout<<"YES"<<endl;
            for (long long i=0; i<num; i++){
                cout<<op[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}