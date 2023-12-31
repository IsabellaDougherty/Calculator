/* A simple calculator program,
controlled by a menu and
divided into separate functions */
#include<iostream>
#include<ctime>
#include<cmath>
using namespace std;
//------------------------------ Function Prototypes ------------------------------
void print_menu();
double get_value();
double divide(double, double);
double minimum(double, double);
double absoluteValue(double);
//------------------------------ Main ------------------------------
int main() {
	srand(time(NULL));
	double pi = std::acos(-1);
	double operand1, operand2, answer;
	int choice, valid_choice; 
	cout << "Author: Isabella Dougherty\nCreated 08/16/2023" << endl;
	cout << "The following is a simple geometry program. You'll be abale to use this as a simple calculator as well as\n utilize it to calculate simple geometric areas/circumference.";
	do {
		print_menu();
		cin >> choice;
		valid_choice = 1;
		switch (choice) {
		case 0:
			break;
		case 1:
			operand1 = get_value();
			operand2 = get_value();
			answer = operand1 + operand2;
			cout << endl << operand1 << " + " << operand2 << " = " << answer << endl;
			break;
		case 2:
			operand1 = get_value();
			operand2 = get_value();
			answer = divide(operand1, operand2);
			cout << endl << operand1 << " / " << operand2 << " = " << answer << endl;
			break;
		case 3:
			operand1 = get_value();
			operand2 = get_value();
			answer = operand1 - operand2;
			cout << endl << operand1 << " - " << operand2 << " = " << answer << endl;
			break;
		case 4:
			operand1 = get_value();
			operand2 = get_value();
			answer = operand1 * operand2;
			cout << endl << operand1 << " * " << operand2 << " = " << answer << endl;
			break;
		case 5:
			operand1 = get_value();
			operand2 = get_value();
			answer = minimum(operand1, operand2);
			cout << endl << "The minimum value of the two numbers is: " << answer << endl;
			break;
		case 6:
			operand1 = get_value();
			answer = absoluteValue(operand1);
			cout << endl << "The absolute value of your input is: " << answer << endl;
			break;
		case 7:
			cout << "Your input will be the maximum value for the random number to be generated. " << endl;
			operand1 = get_value();
			answer = 1 + rand() % (int)operand1;
			cout << "Your random number is: " << answer << endl;
			break;
		case 8:
			operand1 = get_value();
			operand2 = get_value();
			answer = operand1 * operand2;
			cout << "The area of your rectangle is: " << answer << endl;
			break;
		case 9:
			cout << "The first number should be the height and the second should be the base." << endl;
			operand1 = get_value();
			operand2 = get_value();
			answer = (operand1 * operand2) / 2;
			cout << "The area of your triangle is: " << answer << endl;
			break;
		case 10:
			cout << "Enter the radius of your circle." << endl;
			operand1 = get_value();
			answer = pi * operand1 * operand1;
			cout << "The area of your circle is: " << answer << endl;
			break;
		case 11:
			cout << "Enter the radius of your circle." << endl;
			operand1 = get_value();
			answer = 2 * pi * operand1;
			cout << "The circumferance of your circle is: " << answer << endl;
			break;
		default:
			valid_choice = 0;
			cout << "Invalid Choice." << endl;
		}
	} while (choice != 0);
	return 0;
}
//------------------------------ Functions ------------------------------
double divide(double dividend, double divisor) {
	if (divisor == 0)
		return 0;
	else
		return (dividend / divisor);
}
double minimum(double num1, double num2) {
	if (num1 < num2)
		return num1;
	else
		return num2;
}
double absoluteValue(double num1) {
	if (num1 < 0) {
		num1 = num1 * -1;
	}
	return num1;
}
//------------------------------ get_value function ------------------------------
double get_value() {
	double temp_value;
	cout << "Enter a value : ";
	cin >> temp_value;
	return temp_value;
}
void print_menu() {
	cout << endl;
	cout << "Add (1)" << endl;
	cout << "Divide (2)" << endl;
	cout << "Subtract (3)" << endl;
	cout << "Multiply (4)" << endl;
	cout << "Minimum (5)" << endl;
	cout << "Absolute Value (6)" << endl;
	cout << "Random Number (7)" << endl;
	cout << "Rectangle Area (8)" << endl;
	cout << "Triangle Area (9)" << endl;
	cout << "Circle Area (10)" << endl;
	cout << "Circle Circumferance (11)" << endl;
	cout << "Exit (0)" << endl;
	cout << "Enter your choice: ";
}