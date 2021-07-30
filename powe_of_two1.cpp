//brain karegian algorithm
//less time complexity then the naive soltuion
#include<iostream>
using namespace std;


bool powerOfTwo(int n){
    if(n == 0){
        return false;
    }
    return ((n & (n-1)) == 0);
}
int main() {
    int n;
    cin>>n;
    cout<<powerOfTwo(n);
    return 0;
}