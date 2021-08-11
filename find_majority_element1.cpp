//efficient solution
//tc:o(n)
//auxi space:o(1)
#include<iostream>
using namespace std;

int maj_element(int arr[],int n){
    int res=0,count=1;
    for (int i = 1; i < n; i++)
    {
        if(arr[res]==arr[i]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            res=i;
            count=1;
        }
    }

    count=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[res]==arr[i]){
            count++;
        }
        
    }
    if(count<=n/2){
            return -1;
        }
    return res;
    
}

int main() {
     int arr[] = {2,2,5,5,5,3}, n = 6;

     cout<<maj_element(arr, n);
    return 0;
}