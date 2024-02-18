#include <iostream>
#include <conio.h>
using namespace std;
string global_variable = "I am a Global Variable :)";
int main() {
//	Function Declaration
	void greet(void);
	int sum(int, int);
//	Function Declaration for Passing Array as an Argument
	void max(int[]);
//	Function Declaration with Return Value
	int cube(int);
//	Pass By Value vs Pass By Reference
	void pass_by_value(int);
	void pass_by_reference(int&);
//	Default Arguments
	void account(int = 0);

		
		
//	Calling a Function
	greet();
	
	cout << sum(10, 20);
	
	int arr[] = {10, 30, 14, 66, 33};
	max(arr);
	
	int n = 3;
	cout << "Cube of " << n << " is " << cube(n) << endl;
	 
	account();
	account(1000);
	
	int x = 100, y = 200;
	pass_by_value(x);
	pass_by_reference(y);
	cout << "Before X: " << x << endl;
	cout << "Before Y: " << y << endl;
	
	
//	END
	return 0;
}


//	Function Definition
void greet() {
	cout << "Happy Journey" << endl;
//	Using Global Variable inside a Function
	cout << global_variable << endl; 	
}
int sum(int x, int y) {
//	Static Variable (Lifetime till Program Termination)
	static int s;
	s = x + y;
	return s;
}
// Array as an Argument
void max(int a[]) {
	int m = a[0];
	for(int i = 0; i < 5; i++){
		if(m < a[i]) {
			m = a[i];
		}
	}
	cout <<endl << "Maximum Value is : " << m << endl;
}
// Return Value
int cube(int n) {
	return n * n * n;
}
// Default Arguments
void account(int bal) {
	cout << "Balance: " << bal << endl;
}
// Pass by Value
void pass_by_value(int x) {
	x = 10;
	cout << "After X: " << x << endl;
}
// Pass by Reference
void pass_by_reference(int& y) {
	y = 20;
	cout << "After Y: " << y << endl;
}
