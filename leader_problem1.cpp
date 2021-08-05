//efficient solution
// Tc:o(n)
//auxilary space:o(1)
//print output in reverse order

#include<iostream>
using namespace std;
 void Leader(int arr[],  int n){
     int curr_lea = arr[n-1];
     cout<<curr_lea<<" ";
     for (int i = n-2; i >=0 ; i--)
     {
         if(curr_lea<arr[i]){
             curr_lea = arr[i];
             cout<<curr_lea<<" ";
         }
     }
     
 }

int main() {
     int arr[] = {1, 2, 3, 7,4,6,5,2};
    int n = 8;
   
    cout << "Array before move to end:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    Leader(arr, n);
    
    return 0;
}