//
// Created by Prajyot Bhamare on 07-08-2020.
//

#include "Employee.h"

Employee::Employee(std::string&& fName, std::string&& lName, unsigned ssl) {
    FName = fName;
    LName = lName;
    SSL = ssl;
}

void Employee::putData() {
    std::cout << "\nFist Name: " << FName << "\nLast Name: " << LName << "\nSocial Security Number: " << SSL << std::endl;
}

void SalariedEmployee::putData() {
    Employee::putData();
    std::cout << "Salary: " << Salary << "\n" << std::endl;
}

void SalariedEmployee::calculateSal() {
    Salary = weeklySal;
}

void HourlyEmployee::putData() {
    Employee::putData();
    std::cout << "Salary: " << Salary << "\n" << std::endl;
}

void HourlyEmployee::calculateSal() {

    if (hours < 41)
        Salary = wage*hours;
    else
        Salary = (40*wage) + ((hours-40)*wage*1.5);
}

void CommissionEmployee::putData() {
    Employee::putData();
    std::cout << "Salary: " << Salary << "\n " << std::endl;
}

double CommissionEmployee::calculateSal() {
    Salary = commissionRate * grossSales;
    return Salary;
}

void Commission_BaseEmployee::putData() {
    Employee::putData();
    std::cout << "Salary: " << Salary << "\n " << std::endl;
}

void Commission_BaseEmployee::calculateSal() {
    Salary = CommissionEmployee::calculateSal() + baseSalary;
}
