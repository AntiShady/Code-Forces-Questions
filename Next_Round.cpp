#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
int main() {
    
    int n, k;
    // cout<<"Enter 'n' & 'k' :";
    cin>>n>>k;
    cin.ignore();

    // cout<<"Enter scores :";
    string inputLine;
    getline(cin, inputLine);
    
    vector<int> scores;
    istringstream iss(inputLine);
    int num;
    while(iss >> num){
        scores.push_back(num);
    }

    int kthScore = scores[k-1];
    int count = 0;
    for (int n : scores){
        if (n >= kthScore && n>0){
            count++;
        }
    }
    // cout<<"The number of participants in next round is "<<count<<endl;
    cout<<count<<endl;


    return 0;
}