//tc:o(n^2)
//auxi spacE:o(1)

#include<iostream>
using namespace std;
int trapping_rain_water(int arr[],int n){


    int res = 0;
    for (int i = 1; i < n-1; i++)
    {
        int lmax =  arr[i];
        for (int j = 0; j < i; j++)
        {
            lmax=max(lmax,arr[j]);
        }
        int rmax =  arr[i];
        for (int j = i+1; j < n; j++)
        {
            rmax=max(rmax,arr[j]);
        }
        res += min(lmax,rmax)-arr[i];
        
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