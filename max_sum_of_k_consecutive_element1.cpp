//efficient solution
//sliding window technique
//tc:o(n)
//auxi space

#include<iostream>
using namespace std;

int max_sum(int arr[],int n,int k){
    int curr_sum = 0;
    for (int i = 0; i < k; i++)
    {
        curr_sum+=arr[i];
    }
    int maxSum = curr_sum;
    for (int i = k; i < n; i++)
    {
        curr_sum+=(arr[i]-arr[i-k]);
        maxSum = max(maxSum,curr_sum);
    }
    return maxSum;
    
}

int main() {
    int arr[] = {2,3,-7,12,4,-2};
    int n = 6;

    int k;
    cin>>k;
    cout<<max_sum(arr,n,k);
    return 0;
}