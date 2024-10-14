// Andrew Powell 10/14/2024
// oopSaldinaVideo.cpp

#include <iostream>
using std::string;
using namespace std;

class Employee {
private:
    string name;
    string company;
    int age;

public:
    // Constructor
    Employee(string name, string company, int age)
        : name(name), company(company), age(age) {}

    // Setters
    void setName(string name) {
        this->name = name;
    }

    void setCompany(string company) {
        this->company = company;
    }

    void setAge(int age) {
        this->age = age;
    }

    // Getters
    string getName() {
        return name;
    }

    string getCompany() {
        return company;
    }

    int getAge() {
        return age;
    }

    // Method to introduce the employee
    void introduceYourself() {
        cout << "\nHello, my name is " << name
             << ", I work at " << company
             << ", and I am " << age << " years old." << endl;
    }
};

int main() {
    // Create an instance of Employee
    Employee employee1("Saldina", "YT-Codebeauty", 25);

    Employee employee2("John", "Amazon", 35);
    // Call the method to introduce the employee
    employee1.introduceYourself();
    employee2.introduceYourself();

    return 0;
}