//efficent solution 
//tc:o(n)
// auxi space:o(1)

#include<iostream>
using namespace std;
 int stock_buy_and_sell(int arr[],int n){
int profit = 0;
for (int i = 1; i < n; i++)
{
    if(arr[i]>arr[i-1]){
        profit  += arr[i]-arr[i-1];
    }
}
return profit;
 
}

int main() {
    int arr[] = {1,2,6,9,3,5};
    int n = 6;
   
    cout << "Array we have:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout<<stock_buy_and_sell(arr, n);
    return 0;
}