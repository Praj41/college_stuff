//
// Created by Prajyot Bhamare on 07-08-2020.
//

#pragma once
#include <string>
#include <iostream>

class Employee {
    unsigned SSL{0};
    std::string FName, LName;
public:
    Employee(std::string&& fName, std::string&& lName, unsigned ssl);

    Employee() = default;
    virtual ~Employee() = default;
    virtual void putData() = 0;          //Pure virtual Function
};

class SalariedEmployee : public Employee {
    double Salary{0};
    int weeklySal{0};
public:
    SalariedEmployee() = default;
    SalariedEmployee(std::string&& fName, std::string&& lName, unsigned ssl, int weekly) :
            Employee(std::move(fName), std::move(lName), ssl),
                weeklySal(weekly) {calculateSal();}

    void putData() override;
    void calculateSal();
    ~SalariedEmployee() override = default;
};

class HourlyEmployee : public Employee{
    double Salary{0};
    int wage{0}, hours{0};
public:
    HourlyEmployee() = default;
    HourlyEmployee(std::string&& fName, std::string&& lName, unsigned ssl, int wge, int hrs) :
            Employee(std::move(fName), std::move(lName), ssl),
                wage(wge), hours(hrs) {calculateSal();}

    void putData() override;
    void calculateSal();
    ~HourlyEmployee() override = default;
};

class CommissionEmployee : public Employee{
    double Salary{0};
    double grossSales{0}, commissionRate{0};
public:
    CommissionEmployee() = default;
    CommissionEmployee(std::string&& fName, std::string&& lName, unsigned ssl, double sale, double rate) :
            Employee(std::move(fName), std::move(lName), ssl),
                grossSales(sale), commissionRate(rate) {calculateSal();}

    void putData() override;
    double calculateSal();
    ~CommissionEmployee() override = default;
};

class Commission_BaseEmployee : public CommissionEmployee{
    double Salary{0};
    double baseSalary{0};
public:
    Commission_BaseEmployee() = default;
    Commission_BaseEmployee(std::string&& fName, std::string&& lName, unsigned ssl, double sale, double rate, double base) :
            CommissionEmployee(std::move(fName), std::move(lName), ssl, sale, rate),
                baseSalary(base) {calculateSal();}

    void putData() override;
    void calculateSal();
    ~Commission_BaseEmployee() override = default;
};
