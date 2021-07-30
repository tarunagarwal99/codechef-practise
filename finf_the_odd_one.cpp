//naive solution 
//complexity : o(n^2) times 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int numberIsOdd(int arr[],int n){

        for(int i =0;i<n;i++){
        int count = 0;
        for(int j = 0;j<n;j++){
            if(arr[i] == arr[j])
                count++;
            
        }
        if(count%2 != 0)
           return arr[i];
        
    }
}

int main() {
    int n=9;
  
    int arr[] = {5,5,8,8,8,11,11,11,11};
    cout<<numberIsOdd(arr,n);

    return 0;
}