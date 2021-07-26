//efficient way for prime factor
//complexity is o(n)^1/2
#include<iostream>
using namespace std;

bool isprime(int n){
    if(n==1) return false;
    for (int i = 2; i*i <= n; i++)
    {
        if(n%i == 0){
            return false;
        }
        return true;
    }
    
}

int main() {
    int n;
    cin>>n;
    cout<<isprime(n)<<endl;
    return 0;
}