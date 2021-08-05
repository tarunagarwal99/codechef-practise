//naive solution
//tc:o(n^2)  auxi space:o(1)

#include<iostream>
using namespace std;
void moveToEnd(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0){
            for (int j = i+1; j < n; j++)
            {
                if(arr[j]!=0){
                    swap(arr[i],arr[j]);
                }
            }
            
        }
    }
    
}

int main() {
    int arr[] = {10,0,0,0,20,0,20,40,0,0};
    int n=10;
    cout<<"Array before move to end:";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
     moveToEnd(arr,n);
     cout<<"After move to end:";
     for (int i = 0; i < n; i++)
     {
         cout<<arr[i]<<" ";
     }
     
    return 0;
}