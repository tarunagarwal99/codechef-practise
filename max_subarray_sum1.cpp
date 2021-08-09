//naive solution
//tc:o(n^2)
//auxi space:o(1)

#include<iostream>
using namespace std;

int max_subarray_sum(int arr[],int n){
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        int curr=0;
        for (int j = i; j < n; j++)
        {
            curr=curr+arr[j];
            res=max(res,curr);
        }
        
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