//max diff between arr[j]-arr[i] where j>i
//tc:o(n^2) and auxi space:o(1)
#include<iostream>
using namespace std;

int maxDifference(int arr[],int n){
    int res = arr[1]-arr[0];
    for (int  i = 0; i < n-1; i++)
    {
        for ( int j = 0; j < n; j++)
        {
            res=max(res,arr[j]-arr[i]);

        }
        
        
    }
    return res;
    
}

int main() {
     int arr[] = {1, 2, 3, 7,4,6,5,2};
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