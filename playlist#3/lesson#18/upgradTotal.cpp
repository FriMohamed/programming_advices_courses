#include<iostream>
using namespace std;

int main() {
    int Num1, Num2, Num3;
    cout << "Please enter first number: ";
    cin >> Num1;
    cout << "Please enter second number: ";
    cin >> Num2;
    cout << "Please enter third number: ";
    cin >> Num3;

    cout << Num1 << " +\n" << Num2 << " +\n" << Num3 << "\n______________\n";
    cout  << Num1 + Num2 + Num3 << "\n";

    return 0;
}