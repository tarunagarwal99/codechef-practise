#include<iostream>
using namespace std;



int searchTheElement(int arr[],int n,int x){
    for (int  i = 0; i < n; i++)
    {
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
    
}
int main() {
    int arr[] = {10,20,30,40};
    int n=4;
    int x;
    cin>>x;
    cout<<searchTheElement(arr,n,x);
    return 0;
}