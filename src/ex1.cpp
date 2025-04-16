#include <iostream>
#include <cmath>
using namespace std;

int mult(int a, int b){
    int c=a*b;
    return c;
}

float mult(float a, float b){
    float c=a*b;
    return c;
}

double mult(int a, double b, bool tf){
    double c;
    if(tf){
        c = a*b;
        c=floor(c);
    }    
    else{
        c=a*b;
        
    }
    return c;
}

int main(){
    int int1=42, int2=470;
    float float1=3.14, float2=2.72;
    double double1=14.2541254;
    bool input;

    cout<<"boolean input (true=1/false=0): ";
    cin>>input;
        
    cout<<"\n"<<mult(int1,int2);
    cout<<"\n"<<mult(float1,float2);
    cout<<"\n"<<mult(int1,double1,input);
}