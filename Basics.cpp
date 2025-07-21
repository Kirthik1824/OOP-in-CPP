#include <iostream>
using namespace std;

class abstractEmployee {    
public:
    virtual void askForPromotion() = 0; // pure virtual function
};
class Employee {
public:
    string Name;
    string Company;
    int Age;
    Employee(string name, string company, int age) {
        Name=name;
        Company=company;
        Age=age;
    }
    void askForPromotion() {
        if (Age > 30) {
            cout << Name << " got promoted!" << endl;
        } else {
            cout << Name << ", sorry no promotion for you!" << endl;
        }
    }
};

int main () {
    Employee employee1=Employee("John", "Google", 35);
    employee1.askForPromotion();
    cout << "Employee Name: " << employee1.Name << endl;
}