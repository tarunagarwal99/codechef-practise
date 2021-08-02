//here it take 2^n-1 number of steps to reach at the destination for n number of disk
//here middle one is the auxilary tower
#include<iostream>
using namespace std;

void TOH(int n,char A,char B,char C){
    if(n == 1){
      cout<<"move 1 disk "<<A <<"to"<<C<<endl;
    }
    TOH(n-1,A,C,B);
    cout<<"move"<<n<<"from"<<A<<"to"<<C<<endl;
    TOH(n-1,B,A,C);
}

int main() {
    int n;
    cin>>n;
    char A,B,C;
    TOH(n,A,B,C);
    return 0;
}