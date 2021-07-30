//no of set bits 
// n=5 set bits:2,n=7 then set bits:3
//tc : o(no of all bits n)
#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int res = 0;
    while(n>0){
      

      if(n%2 !=0){
          res++;
      }
      n=n/2;
    }
    return 0;
}