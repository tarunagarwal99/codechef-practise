//efficient solution
//tc:o(n)
//space:o(n)
#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;
int trapping_rain_water(int arr[],int n){


    int res = 0;
    int lmax[n],rmax[n];


        lmax[0] =  arr[0];
        for (int i = 0; i < n; i++)
        {
            lmax[i] = max(lmax[i-1],arr[i]);
        }
         rmax[n-1] =  arr[n-1];
        for (int i = n-2; i>=0; i--)
        {
            rmax[i]=max(rmax[i+1],arr[i]);
        }
        for (int i = 1; i < n-1 ;i++)
        {
            res += min(lmax[i],rmax[i])-arr[i];
        }
        
        
return res;
    

}

int main() {
    int arr[] = {1,2,6,9,3,5};
    int n = 6;
   
    cout << "Array we have:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
   cout<<trapping_rain_water(arr,n);
    return 0;
}