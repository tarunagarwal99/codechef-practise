//power set
//if input is: abc then output is: " ","a","b","c","ab,"bc,"ac","abc"
//so if we have n number of stirng character then we have 0 to 2^n-1 number of outcomes
#include<iostream>
#include<math.h>
using namespace std;
void powerSet(string str){
    int n =str.length();
    int powset = pow(2,n);
    for (int  counter= 0; counter < powset; counter++)
    {
        for (int  j = 0; j < n; j++)
        {
            if((counter & (1<<j))!=0){
                cout<<str[j];
            }
        }
          cout<<endl;
    }
    

}

int main() {
    string str;
    cin>>str;
    powerSet(str);
    return 0;
} 