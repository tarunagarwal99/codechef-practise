//tc:o(n^2)
//auxi space:o(1)

#include<iostream>
using namespace std;

int max_even_odd(int arr[],int n){
    int res=1;
    for (int i = 0; i < n; i++)
    {
        int curr=1;
        for (int j = i+1; j < n; j++)
        {
            if((arr[j]%2 == 0 && arr[j-1]%2 != 0) || (arr[j]%2 !=0 && arr[j-1] == 0)){
                curr++;
            }
            else{
                break;
            }
           
        }
         res=max(res,curr);
        
    }
    return res;
    
}

int main() {
 int arr[] = {1,11,2,3,8,5,3};
    int n = 7;
   
    cout << "Array we have:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
   cout<<max_even_odd(arr,n);    
    return 0;
}