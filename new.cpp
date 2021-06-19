//check whether which number is prime or not .

#include<iostream>
using namespace std;

int main() {
  bool isprime  = 1;
  int n;
  cout<<"enter a postive integer:";
  cin>>n;
  if(n == 0 || n == 1){
      isprime = 0;
  }
  else{
      for (int  i = 2; i < n/2; ++i)
      {
        if(n%i == 0){
            isprime = false;
            break;
        }
      }
    }
    if(isprime){
        cout<<n<< " is a prime number."<<endl;

    }
    else
    cout<<n<<" is nota prime number.";
}