//reverse a sting
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
  string  str;
  cin>>str;

int n=  str.length();

for (int i = 0; i < n/2; i++)
{
    swap(str[i],str[n-i-1]);
}
cout<<str;




    return 0;
}