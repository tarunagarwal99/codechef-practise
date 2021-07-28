// ex: x=3 and n=4 then output is :81
//here complexity is o(n) time 
#include<iostream>
using namespace std;
int intPower(int n,int x){
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        res =res*x;
    }
    return res;
    
}

int main() {
    int n,x;
    cin>>n>>x;
    cout<<intPower(n,x);
    return 0;
}