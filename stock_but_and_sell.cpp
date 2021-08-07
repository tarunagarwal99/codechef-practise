//naive solution
//tc:o(n^2)
//auxi space:o(1)
#include<iostream>
using namespace std;

int stock_but_and_sell(int price[],int start,int end){
    if(end<=start){
        return 0;

    }
    int profit =0;
  for (int  i = start; i < end; i++)
  {
       for(int j = i+1;j<=end;j++){
           if(price[j]>price[i]){
  
            int curr_profit = price[j]-price[i] 
            +stock_but_and_sell(price,start,i)
            +stock_but_and_sell(price,j+1,end);
            profit = max(curr_profit,profit);
           }
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
    cout<<stock_but_and_sell(arr, 0,n-1);
    return 0;
}