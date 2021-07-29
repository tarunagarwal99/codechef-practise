#include<iostream>
using namespace std;

int main() {
    int n=8 ,k=2;
    if(((n>>(k-1)) & 1) == 1){
        cout<<"yes"<<endl;

    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}