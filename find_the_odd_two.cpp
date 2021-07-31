//naive solution 
//find the odd two(here two numbers appers odd number of times)
//complexity : o(n^2) times 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void numberIsOdd(int arr[],int n){

        for(int i =0;i<n;i++){
        int count = 0;
        for(int j = 0;j<n;j++){
            if(arr[i] == arr[j])
                count++;
            
        }
        if(count%2 != 0)
           cout<<arr[i]<<" ";
        
    }
}

int main() {
    int n=8;
  
    int arr[] = {5,5,8,8,8,11,11,11};
    numberIsOdd(arr,n);

    return 0;
}