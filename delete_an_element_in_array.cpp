//tc:o(n)
//here we delete teh first occurance of the element
#include<iostream>
using namespace std;

int deleteEle(int arr[],int n,int x){
    int i=0;
    for ( i = 0; i < n; i++)
    {
        if(arr[i]==x){
            break;
        }

    }

    if(i==n){
        return n;
    }
    for (int j = i; j < n-1; j++)
    {
        arr[j] = arr[j+1];
    }
    
    return (n-1);
    
}

int main() {
    int arr[] = {2,4,6,5,7,6};
    int n = 6;
    int x;
    cin>>x;
    cout<<"Before deleting element:";
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    n = deleteEle(arr,n,x);
    cout<<"after deletion:";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";  
    }
    
    
    return 0;
}