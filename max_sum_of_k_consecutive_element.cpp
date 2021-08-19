//given an array and k where we have to find sum (max) of consecutive element
//tc:o(n^2)
//auxi spoace:o(1)
#include<iostream>
using namespace std;

int max_sum(int arr[],int k,int n){
int max_sum = INT_MIN;
for (int i = 0; i+k-1 < n; i++)
{
    int sum = 0 ;
     for (int j = 0; j < k; j++)
     {
        max_sum+=arr[i+j];
     }
     max_sum=max(sum,max_sum);
     
}
return max_sum;

}

int main() {
    int arr[] = {23,45,-32,4,-4};
    int k;
    cin>>k;
    int n;
    cin>>n;
    cout<<max_sum(arr,k,n);
    return 0;
}