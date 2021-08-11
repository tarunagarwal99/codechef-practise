//efficient solution
//tc:o(n)
//auxi space:o(1)
#include<iostream>
using namespace std;

int normal_max_sum(int arr[],int n){
    int res=arr[0],max_ending = arr[0];
    for (int i = 1; i < n; i++)
    {
        max_ending  =  max(arr[i],max_ending+arr[i]);
        res = max(res,max_ending);
    }
    return res;
}
int circular_max_sum(int arr[],int n){
    int max_normal = normal_max_sum(arr,n);
    if(max_normal<0){
        return max_normal;
    }
    int arr_sum = 0;
    for (int i = 0; i < n; i++)
    {
       arr_sum +=arr[i];
       arr[i] =-arr[i];
    }
        int max_circular = arr_sum + normal_max_sum(arr,n);
        return max(max_circular,max_normal);
    
}

int main() {
      int arr[] = {5, -2, 3, 4}, n = 4;

     cout<<circular_max_sum(arr, n);
    
    return 0;
}
