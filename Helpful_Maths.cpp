#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/*     --------------------------------------------first approach--------------------------------------------------------------
int main() {
    string s;
    vector<char> sv;
    // cout<<"Enter a string :";
    cin>>s;
    int ssize = s.size();
    for (int i=0; i<ssize; i++){
        if (s[i] == '1' || s[i] == '2' || s[i] == '3') {
            sv.push_back(s[i]);
        }
    }
    string sb(sv.begin(), sv.end());
    try{
        stoi(sb);

        sort(sb.begin(), sb.end());
        string concat;
        for (int i=0; i<sb.size(); i++){
            concat+=sb[i];
            
            if (i==sb.size()-1){
                break;
            }
            concat+='+';
        }
    
    // cout<<"Concat :"<<concat<<endl;
    cout<<concat<<endl;
    }catch (const invalid_argument& e) {
        std::cerr << "Invalid argument: " << e.what() << std::endl;
    } catch (const out_of_range& e) {
        std::cerr << "Out of range: " << e.what() << std::endl;
    }
    return 0;
}*/



int main(){
    int ones=0, twos=0, threes=0;
    string s;
    cin>>s;
    for (int i=0; i<s.size(); i++){
        if (s[i] == '1') {
            ones++;
        }
        else if (s[i] == '2'){
            twos++;
        }
        else if (s[i]=='3'){
            threes++;
        }

    }
    int n = ones + twos + threes;
    int arr[n];
    vector<char> sv;
    for (int i=0; i<ones; i++){
        // arr[i] = 1;
        sv.push_back('1');
        sv.push_back('+');

    }
    for (int i=ones; i<ones+twos; i++){
        // arr[i] = 2;
        sv.push_back('2');
        sv.push_back('+');

    }
    for (int i=ones+twos; i<ones+twos+threes; i++){
        // arr[i] = 3;
        sv.push_back('3');
        sv.push_back('+');

    }
    if (sv.back() == '+'){
        sv.pop_back();
    }

    for (std::vector<char>::iterator it = sv.begin(); it != sv.end(); it++){
        cout<<*it;
    }
    
    
}