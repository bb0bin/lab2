#include <iostream>
using namespace std;

int main(){
    struct Student{
        char name[50];
        int id;
        float grade;        
    };

    char input=0;
    int reg=0;
    Student student_register[50];

    while(1){
        cout<<"\n\nWhat would you like to do?\n(a) Add a student\n(b) Display all students\n(c) Search for a student by ID\n(d) Exit the program\ninput: ";
        cin>>input;

        switch(input){
            case 'a':
                reg++;
                cout<<"\nStudent name: ";
                cin>>student_register[reg].name;
                cout<<"\nStudent ID: ";
                cin>>student_register[reg].id;
                cout<<"\nGrade: ";
                cin>>student_register[reg].grade;
                break;
            case 'b':
                for (int i=1; i<=reg; i++){
                    cout<<"\n\nStudent name: "<<student_register[i].name<<"\nStudent ID: "<<student_register[i].id<<"\nGrade: "<<student_register[i].grade;
                }
                break;
            case 'c':{
                int check;
                int ic=0;     //iteration counter
                cout<<"Search for student ID: ";
                cin>>check;
                while(1){
                    if(check==student_register[ic].id){
                        cout<<"\nStudent found"<<"\n\nStudent name: "<<student_register[ic].name<<"\nStudent ID: "<<student_register[ic].id<<"\nGrade: "<<student_register[ic].grade;
                        break;
                    }
                    else{ic++;}
                }
                break;
            }
            case 'd':
                exit(0);
        }
    }
    
}
