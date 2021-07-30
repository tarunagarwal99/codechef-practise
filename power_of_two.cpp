//power of two
//input:n=4 output: yes
//input:n=6 output: no
#include<iostream>
using namespace std;

bool powerOfTwo(int n){
    if(n == 0)
    return false;

    while(n!=1){
        if(n%2 !=0){
            return false;
            
        }
        n=n/2;
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    cout<<powerOfTwo(n);
    return 0;
}