#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string sword;
    // cout<<"Enter a string :";
    cin>>sword;
    char&c = sword[0];
    if (islower(c)){
        c = toupper(c);
    }
    // cout<<"ENter string is :"<<sword<<endl;
    cout<<sword<<endl;
    return 0;
}