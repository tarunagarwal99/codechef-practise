// simple method : is to do with the formula of sun of first n natural numbers
//where complexity is:o(n)
#include<iostream>
using namespace std;

int sumOfN(int n){
    if(n == 0){
        return 0;
        }
        return (n+sumOfN(n-1));

}

int main() {
    int n;
    cin>>n;
    cout<<sumOfN(n);
    return 0;
}