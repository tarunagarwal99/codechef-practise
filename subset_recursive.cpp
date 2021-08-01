//subset of any length string
#include<iostream>
using namespace std;

void subset_recursive(string str,string curr,int i){
    if(i = str.length()){
        cout<<curr<<" ";
        return;
    }
    subset_recursive(str,curr,i+1);
    subset_recursive(str,curr+str[i],i+1);
}

int main() {
    string str;
    cin>>str;
    string curr =" ";
    int i=0;
    subset_recursive(str,"",i);
    return 0;
}