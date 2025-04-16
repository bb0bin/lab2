#include <iostream>
using namespace std;

void swapnumbers(int a, int b){
    int c;
    cout<<"\na: "<<a<<"  b: "<<b;
    c=a;
    a=b;
    b=c;
    cout<<"\na: "<<a<<"  b: "<<b;
}

void swapwithpointers (int a, int b){
    int* ptr1=&a;
    int* ptr2=&b;
    int c;
    cout<<"\na: "<<a<<"  b: "<<b;
    c=*ptr1;
    *ptr1=*ptr2;
    *ptr2=c;
    cout<<"\na: "<<*ptr1<<"  b: "<<*ptr2;
}

int q = 5, p = 6, k;

int& getp(){
    return p;
}

int& getq(){
    return q;
}

int& getk(){
    return k;
}

int main(){
    int int1, int2;
    cout<<"\nwithout pointers or references:\n";
    cin>>int1;
    cin>>int2;
    swapnumbers(int1,int2);
    cout<<"\nusing pointers:\n";
    cin>>int1;
    cin>>int2;
    swapwithpointers(int1,int2);
    getp();
    getq();
    getk();
    cout<<"\nusing references\np: "<<p<<" q: "<<q;
    k=p;
    p=q;
    q=k;
    cout<<"\np: "<<p<<" q: "<<q;
}