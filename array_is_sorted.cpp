//here time complexity is o(n^2)

#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[i])
               return false;
        }
        
    }
    return true;
}

int main() {
    int arr[] = {10,2,34,56,78,89};
    int n=6;
    cout<<isSorted(arr,n);
    return 0;
}