// here lets n=9,a=1,b=3,c=9; then we cut the rope in many ways and we have maximum of 9 pieces to 
// to cut them in 1 length pieces
#include<iostream>
#include<math.h>
using namespace std;

int ropeCutting(int n,int a,int b,int c){
    if( n == 0){
        return 0;
    }
    if(n<0){
        return -1;
    }
    int res = max(ropeCutting(n-a,a,b,c),max(ropeCutting(n-b,a,b,c),ropeCutting(n-c,a,b,c)));
    if(res == -1){
        return -1;
    }
    return res+1;
}

int main() {
    int n;
    cin>>n;
    int a,b,c;
    cin>>a>>b>>c;
    cout<<ropeCutting(n,a,b,c);
    return 0;
}