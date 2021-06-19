/*division -3
vaccine-may cook-off challange-2021
*/ 

#include<iostream>
using namespace std;
#define ll long long int 
int main() {
    ll t; //test cases
    cin>>t;
    while(t--){
        ll g,p,X[10];
        cin>>g>>p;    //p means pergroup how many people get vaccinated  g means which number of age group in which the chef have
        for (auto &x : X)
        {
            cin>>x;

        }
        ll before_chef = 0 ;
        for (ll i = g; i < 10; i++)
        {
            before_chef+=X[i];
        }
        auto days =[&](ll people){
            return(people / p + (people%p != 0));  //for people who is not divisible of p
        };
        ll min_days = days(before_chef+1);
        ll max_days = days(before_chef+ X[g-1]);
        cout<<min_days<<' '<<max_days<<endl;
    }

    return 0;
}