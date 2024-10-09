#include <iostream>
using namespace std;

void calculator(double num1, double num2) 
{
    double sum_result = num1 + num2;
    double diff_result = num1 - num2;
    double prod_result = num1 * num2;
    
    cout << "Sum: " << sum_result << endl;
    cout << "Difference: " << diff_result << endl;
    cout << "Product: " << prod_result << endl;

    if (num2 != 0) {
        double quotient_result = num1 / num2;
        double remainder_result = static_cast<int>(num1) % static_cast<int>(num2);
        cout << "Quotient: " << quotient_result << endl;
        cout << "Remainder: " << remainder_result << endl;
    } else {
        cout << "Quotient: Undefined (cannot divide by zero)" << endl;
        cout << "Remainder: Undefined (cannot divide by zero)" << endl;
    }
}

int main() {
    double num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    calculator(num1, num2);

    return 0;
}                             
