#include<iostream>
using namespace std;



int fibo(int n){
   if((n == 0)||(n == 1 )){
       return n;
   }

    return (fibo(n-1)+fibo(n-2));
}
int main() {
    int n;
    int i = 0;
    cin>>n;
    // cout<<fibo(n)<<" ";
while(i<n){
    cout<<" "<<fibo(i);
    i++;
}
    return 0;
}