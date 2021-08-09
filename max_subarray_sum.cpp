//efficient solution
//tc:o(n)
//auxi space:o(1)
#include<iostream>
using namespace std;

int max_subarray_sum(int arr[],int n){
    int res = 0;
    int maxEnding = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding  = max(maxEnding+arr[i],arr[i]);
        res=max(res,maxEnding);
    }
    return res;
    
    
}

int main() {
    int arr[] = {1,-1,2,-3,8,-5,-3};
    int n = 7;
   
    cout << "Array we have:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
   cout<<max_subarray_sum(arr,n);
    return 0;
}