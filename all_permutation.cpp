//this code might be wrong

#include<iostream>
using namespace std;
void permute(string str, int i=0){
    if(i==str.length()-1){
        cout<<str<<" ";
        return;
    }
    for(int j=i;i<str.length();j++){
        swap(str[i],str[j]);
        permute(str,i+1);
        swap(str[i],str[j]);

    }
}

int main() {
    string  str;
    cin>>str;
    int i;
    permute(str,i);
    return 0;
}