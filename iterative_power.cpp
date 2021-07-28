//iterative power
//complexity : o(logn)
#include<iostream>
using namespace std;

int iterativePower(int x,int n){
    int res = 1;
      while(n>0){
          if(n%2!=0){
              res = res*x;
           }
           x=x*x;
           n=n/2;
      }
      return res;
}
int main() {
    int x,n;
    cin>>x>>n;
    cout<<iterativePower(x,n);
    return 0;
}