#include <iostream>
using namespace std;

int main(){
    int value1,value2,result;
    char calctype;
    cout<<"choose calculation (+, -, *, /): ";
    cin>>calctype;
    cout<<"first integer: ";
    cin>>value1;
    cout<<"second integer: ";
    cin>>value2;

    switch(calctype){
        case '+': 
            result=value1+value2;
            break;
        case '-':
            result=value1-value2;
            break;
        case '*':
            result=value1*value2;
            break;
        case '/':
            result=value1/value2;
            break;
    }
    cout<<"result: "<<result;       
}