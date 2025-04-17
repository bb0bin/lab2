#include <iostream>
using namespace std;

int main(){
    int number;

    while(1){
        cout<<"\npick a number, any number: ";
        cin>>number;
        
        if(number>0){
            number=number*number;
            cout<<"\nsquare of your number: "<<number;
        }
        else if(number==0){
            continue;
        }
        else{
            break;
        }
    }
}