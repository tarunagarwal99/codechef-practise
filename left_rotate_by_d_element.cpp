//naive solution
//complexity :o(n) ,auxi space:o(1)
#include<iostream>
using namespace std;


void moveToEnd1(int arr[],int n){
    int temp=arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i-1]=arr[i];
        arr[n-1]=temp;
    }
    
}
void leftRotate(int arr[],int n,int d)
{
    for (int i = 0; i < d; i++)
    {
        moveToEnd1(arr,n);
    }
    
}
int main() {
    int arr[] = {1,2,3,4,5,6,7}; 
    int n = 7;
    int d=2;
    cout << "Array before move to end:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
   cout<<moveToEndBy1(arr, n,d);
    cout << "After move to end:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}