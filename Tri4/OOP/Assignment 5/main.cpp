#include <iostream>
#include <string>

class Employee {
    int employeeID;
    std::string employeeName;
    double income;
    int age;
    std::string city;
    bool twoWheeler;
public:
    Employee(int empID, std::string& name, double inc, int ag, std::string& cty, bool twh)
        : employeeID(empID), employeeName(name), income(inc), age(ag), city(cty), twoWheeler(twh) {}

    void print();
};

void Employee::print() {
    std::cout << "\nEmployee ID: " << employeeID
    << "\nEmployee Name: " << employeeName
    << "\nIncome: " << income
    << "\nAge: " << age
    << "\nCity: " << city
    << "\n Has a two wheeler" << std::endl;
}

int main() {

    int employeeID;
    std::string employeeName;
    double income;
    int age;
    std::string city;
    bool twoWheeler;

    std::cout << "Enter the Employee id" << std::endl;
    std::cin >> employeeID;

    std::cout << "Enter the Employee name" << std::endl;
    std::cin >> employeeName;

    int Error = 4;

    try {
        std::cout << "Enter the Income" << std::endl;
        std::cin >> income;
        if (income < 50000 || income > 100000)
            throw income;
        Error--;

        std::cout << "Enter the age" << std::endl;
        std::cin >> age;
        if (age < 20 || age > 50)
            throw age;
        Error--;

        std::cout << "Enter the place" << std::endl;
        std::cin >> city;
        if (!(city == "Pune" || city == "Gujrat" || city == "Delhi" || city == "Hydrabad"
            || city == "pune" || city == "gujrat" || city == "delhi" || city == "hydrabad"))
            throw city;
        Error--;

        std::cout << "Enter 1 if employee is using 2-wheeler else enter 0" << std::endl;
        std::cin >> twoWheeler;
        if (!twoWheeler)
            throw twoWheeler;
        Error--;
    }
    /*
     * Catching exceptions here
     */
    catch (double inc) {
        std::cout << inc << " Does not fall between 50,000 and 1,00,000" << std::endl;
    }
    catch (int ag) {
        std::cout << ag << " Does not fall between 20 and 50" << std::endl;
    }
    catch (std::string& cty) {
        std::cout << cty<< " Is not a valid place" << std::endl;
    }
    catch (bool twW) {
        std::cout << "Employee does not have a two wheeler" << std::endl;
    }


    if (Error) {
        std::cout << "Could not pass the test, try again" << std::endl;
    } else {
        Employee employee(employeeID, employeeName, income, age, city, twoWheeler);
        employee.print();
    }

    return 0;
}
