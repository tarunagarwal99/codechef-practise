#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    // int k=2*n-2;
    for(int i=0;i<n;i++){
     

     for (int j = 0; j <i; j++){
         for (int k = 0; k <  2*i-1; k++)
         {
            cout<<" ";
         }
     cout<<"*";
       
     }
        cout<<endl;
    
     
     
     
    }
    return 0;
}