// Andrew Powell 10/7/2024
// oopPractice.cpp

#include <iostream>
#include <vector>

using namespace std;
using std::string; // :: means access modifier

class Employee {
public:
    string name;
    string company;
    int age;

    void introduction() {
        cout << "Name - " << name << endl;
        cout << "Company - " << company << endl;
        cout << "Age - " << age << endl;

    }

    // Class Constructors
    Employee(string name, string company, int age)
        : name(name), company(company), age(age){

        /* I remembered you talked to me about : before class so, I asked chatgpt
           what that would look like using them. So I could also do it this way but
           Saldina's way was not working for some reason, maybe I missed a letter or something? */

        /*this->name = name;
        this->company = company;
        this->age = age;*/

        /* could not get the program to run correctly without this->
        not to sure why name = name worked for Saldina and not me? */
    }

};

int main() {

    cout << "\n";
    Employee employee1 = Employee("Saldina","YT-CodeBeauty",25);
    employee1.introduction();

    cout << "\n";
    Employee employee2 = Employee("John","Amazon",35);
    employee2.introduction();

    // Create an employee with 3 fields
    cout << "\n";
    Employee aThreeFieldEmployee("Three","Field", 99);
    aThreeFieldEmployee.introduction();

    // Create an employee using a pointer
    cout << "\n";
    Employee* pEmployee = new Employee("New Employee","New Company",55);
    pEmployee->introduction();
    cout << "the new employee's name is: " << pEmployee->name << endl;
    cout << "the new employee's company is: " << pEmployee->company << endl;
    cout << "the new employee's age is: " << pEmployee->age << endl;

    // Create a vector to store Employee objects
    cout << "\n";
    vector<Employee> employees;

    // Add employees to a vector using constructor
    employees.push_back(Employee("Saldina","YT-CodeBeauty",25));
    employees.push_back(Employee("John","Amazon",35));
    employees.push_back(Employee("Andrew","Fresno City College",31));
    employees.push_back(Employee("Dennis","Fresno City College",40));

    // Create a vector (list of objects) to store Employee objects
    vector<Employee> employeesLoop;

    // Create a pointer for my employees
    Employee* pEmpList;
    for (int i = 0; i < 10; i++) {
        cout << "\n" << "in the for loop and i is " << i << endl;
        pEmpList = new Employee("New Employee in my list","New Company in my list",1);
        pEmpList->introduction();

        // add this object to our vector list
        employeesLoop.push_back(*pEmpList);
    }

    /* Use a for : each loop to output the list
    cout << "\n";
    for (const auto& item: Employee& : employeesLoop) {}
    item.introduction(); (think I did this wrong) */

        // Create a for loop (too slow to write this part out)

    return 0;
}
