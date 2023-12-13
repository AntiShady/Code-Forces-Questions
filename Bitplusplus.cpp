#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    int x=0;
    // cout<<"n :";
    cin>>n;
    // cout<<"n is "<<n<<endl;
    for (int i=0; i<n; i++){
        // cout<<"stat :";
        string stat;
        cin>>stat;
        // cout<<"stat :"<<stat<<endl;
        if (stat == "x++" || stat == "++x"|| stat == "X++" || stat == "++X"){
            x++;
        }
        else if (stat == "x--" || stat == "--x" || stat == "X--" || stat == "--X"){
            x--;
        }

    }
    cout<<x<<endl;
    return 0;
}