//efficient solution
//tc:o(n)
//auxi space:o(1)

#include<iostream>
using namespace std;

int max_consecutive_sum(int arr[],int n){
    int res = 0,curr=0;
    for (int i = 0; i < n; i++)
    {
       if(arr[i]==0){
           curr=0;
       }
       else{
           curr++;
           res=max(res,curr);
       }
    }
    return res;
}

int main() {
    int arr[] = {1,0,1,1,0,1,1,1};
    int n = 8;
   
    cout << "Array we have:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
   cout<<max_consecutive_sum(arr,n);
    return 0;
}