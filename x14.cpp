// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"1"<<" ";
        }
        cout<<"0";
        cout<<endl;
        
    }
    
    return 0;
}