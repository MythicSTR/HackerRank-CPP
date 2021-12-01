#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
    public:
        char name[100];
        int age;
        
        virtual void getdata() {
            //This is a virtual function for getdata
        }
    
        virtual void putdata() {
            //This is a virtual function for putdata
        }
};

class Professor : public Person {
    public:
        int publications;
        int cur_id;
        static int cur_id_professor;
        
        Professor() {
            cur_id = ++cur_id_professor;
        }
        
        void getdata() {
            cin >> name >> age >> publications;
        }   
        
        void putdata() {
            cout << name << " " << age << " " << publications << " " << cur_id << endl;
        } 
};

class Student : public Person {
    public:
        int marks[6];
        int sum = 0;
        int cur_id;
        static int cur_id_student;
        
        Student() {
            cur_id = ++cur_id_student;
        }
        
        void getdata() {
            cin >> name >> age;
            for(int i = 0; i < 6; ++i) {
                cin >> marks[i];
                sum += marks[i];
            }
        }
        
        void putdata() {
            cout << name << " " << age << " " << sum << " " << cur_id << endl;
        }
};

int Professor::cur_id_professor = 0;
int Student::cur_id_student = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
}