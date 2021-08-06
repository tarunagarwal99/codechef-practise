//efficient solution
//tc:o(n)
//auxi space:o(1)

#include<iostream>
using namespace std;

int maxDifference(int arr[],int n){
    int res = arr[1]-arr[0], min_val=arr[0];
    for (int  j = 1; j < n; j++)
    {
       res=max(res,arr[j]-min_val);
       min_val = min(arr[j],min_val);        
        
    }
    return res;
}

int main() {
      int arr[] = {8,7,6,5,4,3,1,0};
    int n = 8;
   
    cout << "Array we have:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout<<maxDifference(arr, n);
    return 0;
}