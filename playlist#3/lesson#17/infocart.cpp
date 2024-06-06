#include<iostream>
using namespace std;


int main() {
    string Stars = "****************************************";
    string Name = "Mohamed";
    int Age = 20;
    string City = "Fes";
    string Country = "Morocco";
    int Monthly_Salary = 20000;
    int Yearly_Salary = 240000;
    char Gender = 'M';
    bool Married = false;

    cout << Stars + "\n";
    cout << "Name:"<< Name << "\n";
    cout <<  "Age:" << Age << "Years.\n";
    cout << "City:" + City + "\n";
    cout << "Country:" + Country + "\n";
    cout << "Monthly Salary:" << Monthly_Salary << "\n";
    cout << "Yearly Salary:" << Yearly_Salary << "\n";
    cout << "Gender:" << Gender << "\n";
    cout << "Maried:" << Married << "\n";
    cout << Stars + "\n";

    return 0;
}