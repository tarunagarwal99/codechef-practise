//tc:o(n)
//auxi space:o(d)
#include<iostream>
using namespace std;

void leftRotate(int arr[],int n,int d){
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i]=arr[i];

    }
     for (int i = d; i < n; i++)
     {
         arr[n-d]=arr[i];
     }
     for (int i = 0; i < d; i++)
     {
         arr[n-d+i]=temp[i];
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
   leftRotate(arr, n,d);
    cout << "After move to end:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}