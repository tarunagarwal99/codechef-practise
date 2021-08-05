//naive solution
//tc:o(n^2)
//auxi space:o(1)

#include<iostream>
using namespace std;

void Leader(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]<=arr[j]){
                flag=true;
                break;
            }
        }
        if(flag==false){
            cout<<arr[i]<<" ";
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