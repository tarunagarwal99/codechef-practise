//ship the packages problem
//demux academy
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getTrip(vector<int>& packages,int capacity){
 int trip_count = 0,current_trip_capacity = 0;
 for (int i = 0; i < packages.size(); i++)
 {
     if(current_trip_capacity +  packages[i] <= capacity){
         current_trip_capacity += packages[i];
     }
     else{
         trip_count++;
         current_trip_capacity = packages[i];
     }
 }
 
return trip_count+1;

}

int main() {
    int n,D;   //D is the number of days
    int max_weight = INT_MIN;
    int sum_weight  = 0;


    vector<int> packages(n);
    
    for (int i = 0; i < n; i++)
    {
        cin>>packages[i];
        max_weight = max(max_weight,packages[i]);
        sum_weight = sum_weight  +  packages[i]; 
    }

    int lo = max_weight;
    int hi = sum_weight;
    int mid;

    //searching packages
    //max(packages[i]) to sum(packages[i])
    // p(x): trip[i]<=D
    //first T
    while(lo<hi){
        if(getTrip(packages,mid)<=0){
            hi =mid;
        }
        else{
            lo =mid+1;
        }
       
    }

     cout<<lo<<endl;    
    
    
    return 0;
}
