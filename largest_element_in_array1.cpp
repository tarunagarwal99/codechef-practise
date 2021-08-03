#include<iostream>
using namespace std;


int largestEle(int arr[],int n){
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>arr[res])
        res=i;
    }
    return res;
     
}
int main() {
    int arr[]= {100,23,45,567,34,42};
    int n=6;
    cout<<largestEle(arr,n);
    return 0;
}