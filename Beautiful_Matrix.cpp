#include <iostream>
#include <cstdlib>
using namespace std;
int main() { 
    int r,c;
    int M[5][5];
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            int n;
            cin>>n;
            if (n == 1) {
                r = i+1;
                c = j+1;
            }
        }
    } 
    
    int ans = abs((3-r)) + abs((3-c));
    cout<<ans<<endl; 

    return 0;
}