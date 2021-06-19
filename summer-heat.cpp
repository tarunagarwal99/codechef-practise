// codechef-june long challange-2021
#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int xa,xb,Xa,Xb,sum;
        cin>>xa>>xb>>Xa>>Xb;
        sum= Xa/xa + Xb/xb ;
        cout<<sum<<endl;
    }
    return 0;
}