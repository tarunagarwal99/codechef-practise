//tc:0(n)
//aux space:o(1)

#include<iostream>
using namespace std;

void isReverse(int arr[],int n){
    int low = 0,high = n-1;
    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;

        low++;
        high--;

    } 
}

int main() {
    int n;
    int arr[]={10,5,7,30};
    cin>>n;
    cout<<"Before reverse:";
    for (int i = 0; i < n; i++)
    {
      cout<<arr[i]<<" ";
    }
    cout<<endl;

    
    isReverse(arr,n);
    cout<<"after reverse:";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}