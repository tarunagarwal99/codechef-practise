<<<<<<< HEAD
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n,x,k;
        cin>>n>>x>>k;
        if((x%k == 0) or (n+1-x)%k == 0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    
    return 0;
=======
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n,x,k;
        cin>>n>>x>>k;
        if((x%k == 0) or (n+1-x)%k == 0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    
    return 0;
>>>>>>> 967555c9dba04b0165dc34b5b3033939519a65ab
}