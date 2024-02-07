#include <iostream>

using namespace std;

class Student{
public:
    string name;
    int id;
    string course;
    string section;

    void TakeStudentDetails(){
            cout << "Enter student name: ";
            cin >> name;
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter course name: ";
            cin >> course;
            cout << "Enter section name: ";
            cin >> section;

    }
    void ShowStudentDetails(){
        cout << endl;

            cout << "Student Name Is " << name << endl;
            cout << "Student ID Is " << id << endl;
            cout << "Student course Is " << course << endl;
            cout << "Student section Is " << section << endl;


    }
};

int main(){
    Student s1;
    s1.TakeStudentDetails();
    s1.ShowStudentDetails();
    return 0;
}
