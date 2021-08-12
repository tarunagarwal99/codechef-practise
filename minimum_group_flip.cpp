//efficient method
//tc:o(n)
//auxi space:o(1)
#include<iostream>
using namespace std;

int min_group_flip(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        if(arr[i]!=arr[i-1]){
            if(arr[i]!=arr[0]){
                cout<<"From "<<i<<" to ";
            }
            else{
                cout<<(i-1)<<endl;
            }
        }
    }
    if(arr[n-1]!=arr[0]){
        cout<<(n-1)<<endl;
    }
    
}

int main() {
    int arr[] = {1,1,0,1,0,1,0,0,0,1,1,0,1}, n = 13;

     cout<<min_group_flip(arr, n);
    return 0;
}