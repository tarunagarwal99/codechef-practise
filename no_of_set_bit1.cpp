//brain karegian algorithm
//tc: o(set bit count)
#include<iostream>
using namespace std;


int noOfBits(int n){
    int res = 0;
    while(n>0){
        n=(n&(n-1));
        res++;
    }
    return res;

}
int main() {
    int n;
    cin>>n;
    cout<<noOfBits(n)<<endl;
    return 0;
}