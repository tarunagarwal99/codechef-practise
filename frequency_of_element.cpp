#include<iostream>
using namespace std;
int elementFreq(int arr[],int n){
   int freq=1,i=1;
   while(i<n){
       while(i<n && arr[i]==arr[i-1]){
           freq++;
           i++;
       }
       cout<<arr[i-1]<<" "<<freq<<endl;
       i++;
       freq=1;

   }
   if(n==1 || arr[n-1]!=arr[n-2]){
       cout<<arr[n-1]<<" "<<"1";
   }
   
   }

int main() {
     int arr[] = {8,8,6,2,2,3,1,0};
    int n = 8;
   
    cout << "Array we have:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    elementFreq(arr, n);
    return 0;
}