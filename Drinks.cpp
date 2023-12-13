#include <iostream>
#include <iomanip>
// using namespace std;
int main() {
    int n;
    std::cin>>n;
    float sum;
    float p[n];
    for (int i=0; i<n; i++){
        std::cin>>p[i];
        float n = p[i]/100;
        // std::cout<<n<<std::endl;
        sum+=n;
    }
    double result = sum/n*100;
    std::cout<<std::fixed<<std::setprecision(12)<<result<<std::endl;
    return 0;
}