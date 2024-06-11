#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int eid;
    string name;

public:
    Employee(int e, string n) {
        eid = e;
        name = n;
    }
    int getEmployeeId() { return eid; }
    string getName() { return name; }
};

class FullTime : public Employee {
private:
    int salary;

public:
    FullTime(int e, string n, int s) : Employee(e, n) {
        salary = s;
    }
    int getSalary() { return salary; }
};

class PartTime : public Employee {
private:
    int wage;

public:
    PartTime(int e, string n, int w) : Employee(e, n) {
        wage = w;
    }
    int getWage() { return wage; }
};

int main() {
    int eid, salary, wage;
    string name;

    cout << "Enter details for full-time employee:\n";
    cout << "Employee ID: ";
    cin >> eid;
    cout << "Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Salary: ";
    cin >> salary;

    FullTime p1(eid, name, salary);

    cout << "Enter details for part-time employee:\n";
    cout << "Employee ID: ";
    cin >> eid;
    cout << "Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Wage: ";
    cin >> wage;

    PartTime p2(eid, name, wage);

    cout << "\nFull-time employee details:\n";
    cout << "Name: " << p1.getName() << ", Salary: " << p1.getSalary() << endl;

    cout << "\nPart-time employee details:\n";
    cout << "Name: " << p2.getName() << ", Wage: " << p2.getWage() << endl;

    return 0;
}
