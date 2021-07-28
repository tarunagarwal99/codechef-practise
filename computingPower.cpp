//here time complexity is:o(logn)
//computing power
//T(n) = T(n-1) + o(1)

#include<iostream>
using namespace std;
int isPower(int x,int n){
    if(n == 0){
        return 1;
    }
    int tmp = isPower(x,n/2);
    tmp =tmp*tmp;
    if(n%2 == 0){
        return tmp;
    }
    else{
        return tmp*x;
    }
}

int main() {
    int x,n;
    cin>>x>>n;
    cout<<isPower(x,n);
    
    return 0;
}