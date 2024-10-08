#include<iostream>
using namespace std;

int main() {
    double num_1 = 0;
    double num_2 = 0;
    char choice = '0';

    cout << "Enter Number one: ";
    cin >> num_1;
    cout << "Enter the Operator(+, -, *, /) only: "; 
    cin >> choice;
    cout <<"Enter the Number two: ";
    cin >> num_2; 

    if (choice == '+')
    {
        double add = num_1 + num_2;
        cout << "The Addition is: " << add;
    } else if (choice == '-')
    {
        double subtract = num_1 - num_2;
        cout << "The Subtraction is: " << subtract;
    } else if (choice == '*') 
    {
       double multiply = num_1 * num_2;
       cout << "The Multiplication is: " << multiply;
    } else if (choice == '/')
    {
       double divide = num_1 / num_2;
       cout << "The Division is: " << divide;
    } else {
        cout << "Please Enter a Valid Operator(+, -, *, /)" << endl;
    }
 
    return 0;
}