<<<<<<< HEAD
//prime number solution

#include<iostream>
using namespace std;

int main() {
    for (int i = 2; i<100; i++)   {
      for (int  j = 2; j < i; j++)
      {
        if(i%j == 0){
            break;
        }
        else if(i == j+1){
            cout<<i<<" ";
        }
      }
      
    }
    
        return 0;
=======
//prime number solution

#include<iostream>
using namespace std;

int main() {
    for (int i = 2; i<100; i++)   {
      for (int  j = 2; j < i; j++)
      {
        if(i%j == 0){
            break;
        }
        else if(i == j+1){
            cout<<i<<" ";
        }
      }
      
    }
    
        return 0;
>>>>>>> 967555c9dba04b0165dc34b5b3033939519a65ab
}