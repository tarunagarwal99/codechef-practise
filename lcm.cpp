//lcm //gfg
#include<iostream>
using namespace std;

int lcm(int a,int b){
    int res  = max(a,b);
    while(true){
        if(res%a == 0 && res%b ==0){
            return res;
        }   res++;
    }

    return res;
}

int main() {
    int n,m;
    cin>>n>>m;
    cout<<lcm(n,m);
    return 0;
}