#include <iostream>
#include "Employee.h"

int main() {

    Employee *employees[4] = {nullptr};

    employees[0] = new SalariedEmployee("Prajyot", "Bhamare c", 11113, 94650);

    employees[1] = new HourlyEmployee("Prajyot", "Bhamare a", 11111, 5130, 25);

    employees[2] = new CommissionEmployee("Prajyot", "Bhamare b", 11112, 5555, 0.35);
     
    employees[3] = new Commission_BaseEmployee("Prajyot", "Bhamare d", 11114, 2255, 0.15, 4650);

    for(auto& employee : employees)
        employee->putData();

    for(auto& employee : employees) {
        delete employee;
        employee = nullptr;
    }

    return 0;
}
