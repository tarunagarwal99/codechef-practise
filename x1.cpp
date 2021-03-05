#include<iostream>
using namespace std;

template<class T>
class Calculator{
    private:
     T num1,num2;
    public:
    Calculator(T n1,T n2){
        num1=n1;
        num2=n2;
    }

    T add(){ return num1+num2;}
    T subtract(){ return num1-num2;}
    T mul(){ return num1*num2;}
    
};


int main() {
    Calculator<int> obj1(2,3);
    cout<<obj1.add()<<endl;
    return 0;
}