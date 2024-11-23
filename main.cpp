#include <iostream>
#include "Person.cpp"
#include "Student.cpp"
#include "Teacher.cpp"
#include "Lab.cpp"
#include "Course.cpp"
using namespace std;

int main() {
    Teacher teacher("Dr. Juan Salvador Lucas", 35, "123 Street", "T001", 20);
    Lab lab(101, "Applied Math", 20);
    Course course(1, 15, "Calculus 2: The Return of the Derivative", teacher, lab);

    int choice = 0; //starting the variable for the while loop
    while (choice != 6) {
        cout << "\n===== University System Menu =====\n";
        cout << "1. View Course Details\n";
        cout << "2. Add Student\n";
        cout << "3. Remove Student\n";
        cout << "4. Update Course Duration\n";
        cout << "5. Modify Lab Size\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "\n" << course.getCourseDetails() << "\n";
        } 
            
        else if (choice == 2) {
            string name, address, studentID;
            int age, semester;
            double avrg;

            cin.ignore();
            cout << "Enter student name: ";
            getline(cin, name);

            cout << "Enter student age: ";
            cin >> age;

            cin.ignore();
            cout << "Enter student address: ";
            getline(cin, address);

            cout << "Enter student ID: ";
            cin >> studentID;

            cout << "Enter student semester: ";
            cin >> semester;

            cout << "Enter student average: ";
            cin >> avrg;

            course.addStudent(Student(name, age, address, studentID, semester, avrg));
            cout << "Student added successfully :D\n";
        } 
            
        else if (choice == 3) {
            string studentID;
            cout << "Enter student ID to remove: ";
            cin >> studentID;
            course.removeStudent(studentID);
            cout << "Student removed successfully :D\n";
        } 
            
        else if (choice == 4) {
            int duration;
            cout << "Enter new course duration (weeks): ";
            cin >> duration;
            course.setCourseDuration(duration);
            cout << "Course duration (weeks) updated successfully :D\n";
        } 
            
        else if (choice == 5) {
            int size;
            cout << "Enter new lab size: ";
            cin >> size;
            Lab updatedLab(lab.getLabCode(), lab.getLabType(), size);
            cout << "Lab size updated successfully! :D";
        
        } 
        
        else if (choice == 6) {
            cout << "Exiting program.\n";
        } 
        
        else {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}

