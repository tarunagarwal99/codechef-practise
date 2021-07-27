//prime factores of any number
//complexity : o(n^1/2logn)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void primeFactor(int n){
    if(n<=1) return;
    for (int i = 2; i*i <= n; i++)
    {
        while(n%i == 0){
            cout<<i<<" ";
            n=n/i;
        }

    }
    if(n>1){
        cout<<n<<" ";
    }
    cout<<endl;
    
}
int main() {
    int n;
    cin>>n;
    primeFactor(n);
    return 0;
}