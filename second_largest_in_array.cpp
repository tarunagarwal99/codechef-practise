#include<iostream>
using namespace std;

int largestEle(int arr[],int n){
    int largest = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>arr[largest])
        largest=i;
    }
    return largest;
     
}

int secondLarEle(int arr[],int n){

    int largest = largestEle(arr,n);
    int res = -1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=arr[largest])
       {
           if(res == -1){
               res =i;
           }
           else if(arr[i]>arr[res]){
               res =i;
           }
       }
    }
    return res;
     
}


int main() {
     int arr[]= {100,23,45,567,34,42};
    int n=6;
    cout<<secondLarEle(arr,n);
    return 0;
}