//naive soltuion
//tc:o(n^2)
//auxi space:o(1)

#include<iostream>
using namespace std;

int maj_element(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        int count=1;
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count > n/2){
            return i;
        }
    }
    return -1;
    
}

int main() {
    int arr[] = {2,5,5,5,5,3}, n = 6;

     cout<<maj_element(arr, n);
    return 0;
}