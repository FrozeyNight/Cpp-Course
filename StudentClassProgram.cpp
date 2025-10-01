#include <iostream>
#include <vector>

struct Student{
    std::string name;
    std::string major;
    double gpa;

    Student(std::string name, std::string major, double gpa)
        : name(name), major(major), gpa(gpa){};

    void study(){
        std::cout << name << " is studying!" << "\n";
    }
};

class Class{
    std::vector<Student> students;
    public:

        Class(std::vector<Student> students)
            : students(students){};
        
        double getAverageGPA(){
            double totalGPA;
            for(Student student : students){
                totalGPA += student.gpa;
            }
            return totalGPA / students.size();
        }
};

int main(){

    Student student1("Patrick", "Economics", 3.2);
    Student student2("Bob", "I.T", 4.3);
    Student student3("John", "Data Analysis", 3.1);

    std::cout << student1.name << "\n";
    std::cout << student2.name << "\n";
    student3.study();

    std::vector<Student> firstClass = {student1, student2, student3};

    Class A(firstClass);
    std::cout << A.getAverageGPA() << "\n";

    return 0;
}