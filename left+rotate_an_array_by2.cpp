//tc:o(n)
//auxi space: o(1)
//REERSAL METHOD TO REVERSE AN ARRAY



#include<iostream>
using namespace std;

void reverse(int arr[],int low,int high){
    while(low<high){
        swap(arr[high],arr[low]);
        low++;
        high--;
    }
}

void leftRotate(int arr[],int n,int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int d=3;
    cout << "Array before move to end:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    leftRotate(arr, n,d);
    cout << "After move to end:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }    
    return 0;
}