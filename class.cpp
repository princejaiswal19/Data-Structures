#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int rollNumber;
    std::string department;

public:
    void enterStudentDetails() {
        std::cout << "Enter Name: ";
        std::getline(std::cin >> std::ws, name);
        std::cout << "Enter Roll Number: ";
        std::cin >> rollNumber;
        std::cout << "Enter Department Name: ";
        std::cin>>department;
        std::cin.ignore(); 
        // Clear the newline character left in the input buffer
        std::getline(std::cin >> std::ws, department);
    }

    void displayStudentDetails() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Department: " << department << std::endl;
    }
};

int main() {
    const int numStudents = 5;
    Student students[numStudents];

    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Enter details for Student " << i + 1 << ":" << std::endl;
        students[i].enterStudentDetails();
    }

    std::cout << std::endl << "Student Details:" << std::endl;
    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Details of Student " << i + 1 << ":" << std::endl;
        students[i].displayStudentDetails();
        std::cout << std::endl;
    }

}
