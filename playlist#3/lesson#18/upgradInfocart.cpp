#include<iostream>
using namespace std;


int main() {
    string Name, City, Country, Stars = "****************************************";
    short Age;
    float Monthly_Salary;
    char Gender;
    bool IsMarried;

    cout << "Please enter your name: ";
    cin >> Name;
    cout << "Please enter your age: ";
    cin >> Age;
    cout << "Please enter your City: ";
    cin >> City;
    cout << "Please enter your Country: ";
    cin >> Country;
    cout << "Please enter your Monthly_Salary: ";
    cin >> Monthly_Salary;
    cout << "Please enter your Gender (M or F): ";
    cin >> Gender;
    cout << "If you maried enter 1 and if not enter 0: ";
    cin >> IsMarried;

    cout << Stars + "\n";
    cout << "Name: "<< Name << "\n";
    cout << "Age: " << Age << " Years.\n";
    cout << "City: " + City + "\n";
    cout << "Country: " + Country + "\n";
    cout << "Monthly Salary: " << Monthly_Salary << "\n";
    cout << "Yearly Salary: " << Monthly_Salary * 12 << "\n";
    cout << "Gender: " << Gender << "\n";
    cout << "Maried: " << IsMarried << "\n";
    cout << Stars + "\n";

    return 0;
}