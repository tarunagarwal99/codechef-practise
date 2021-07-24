//greatest common divisor
#include<iostream>
using namespace std;
int gcd(int a,int b){
    int res = min(a,b);
    while (res>0)
    {
        if(a%res == 0&& b%res == 0)
        {
            break;
        }
        res--;
    }
    return res;
    
}

int main() {
    int n,m;
    cin>>n>>m;
    cout<<gcd(n,m);
    return 0;
}