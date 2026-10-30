#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class Student {
private:
    string name;
    string rollNo;
    int subjectsEnrolled;
    vector<float> marks;
    float cgpa;

public:
    Student() : subjectsEnrolled(0), cgpa(0.0) {}

    void inputDetails() {
        cout << "Enter Student Name: ";
        getline(cin >> ws, name); // ws consumes any leading whitespace
        
        cout << "Enter Roll Number: ";
        getline(cin, rollNo);
        
        cout << "Enter number of subjects enrolled: ";
        cin >> subjectsEnrolled;
        
        marks.resize(subjectsEnrolled);
        for (int i = 0; i < subjectsEnrolled; ++i) {
            cout << "Enter marks for subject " << (i + 1) << ": ";
            cin >> marks[i];
        }
        
        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void displayDetails() const {
        cout << "\n----------------------------------------\n";
        cout << "Student Profile: " << name << "\n";
        cout << "----------------------------------------\n";
        cout << "Roll No: " << rollNo << "\n";
        cout << "Subjects Enrolled: " << subjectsEnrolled << "\n";
        
        cout << "Marks: ";
        for (int i = 0; i < subjectsEnrolled; ++i) {
            cout << fixed << setprecision(2) << marks[i] << (i < subjectsEnrolled - 1 ? ", " : "");
        }
        cout << "\nCGPA: " << fixed << setprecision(2) << cgpa << "\n";
        cout << "----------------------------------------\n";
    }
};

int main() {
    Student s1;
    s1.inputDetails();
    s1.displayDetails();
    
    return 0;
}