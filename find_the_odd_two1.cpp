//here we use the property of xor
//complexity : o(n)

#include<iostream>
using namespace std;

int oddAppeeaing(int arr[],int n){
    int XOR = 0,res1=0,res2=0;
    for (int i = 0; i < n; i++)
    {
        XOR=XOR^arr[i];

    }
    int so = XOR & ~(XOR-1);
    for (int i = 0; i < n; i++)
    {
        if(arr[i]&so!=0)
           res1=res1^arr[i];
        else
            res2=res2^arr[i];   
    }
    cout<<res1<<" "<<res2;
    
    
}

int main() {
 int n=10;

 int arr[] = {2,2,3,3,5,4,4,6,4,4};
 cout<<oddAppeeaing(arr,n);



    return 0;
}