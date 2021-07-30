//efficient solution
//using Xor property 
//complexity : o(n)
#include<iostream>
using namespace std;

int findTheOdd(int arr[],int n){
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    return res;
    
}

int main() {
    int n=9;
    int arr[] = {5,5,8,8,8,10,10,10,10};
    cout<<findTheOdd(arr,n);
        return 0;
} 