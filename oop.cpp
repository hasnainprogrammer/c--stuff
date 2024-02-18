#include <iostream>
#include <conio.h>
using namespace std;

//	Defining a Class
class student {
	
//	Access Specifiers
	private:
		char name[20];
		int age;
	public:
		void getData() {
			cout << "Enter name: ";
			cin >> name;
			cout << "Enter age: ";
			cin >> age;
		}
		void showData() {
			cout << "Name: " << name << "  age: " << age << endl;
		}
		
//		Defining Member Function Outside the Class
		void show_data_from_outside_the_class();
};

//	Constructors
class constructor_function{
	private:
		int a, b;
		string name;
	public:
		
//	Constructor Function
	constructor_function() {
		cout << "This is a Constructor Function" << endl;
	}
	
//	Initializing Data using Constructors
	constructor_function(string user_supplied_name) {
		name = user_supplied_name;
		cout << "Initialed Value of a Data Member name is : " << name << endl;
	}
	
//	Constructor Overloading
	constructor_function(int x, int y) {
		cout << "Sum of " << x << " + " << y << " is " << x + y;
	}
};

//	Destructors
class destructor_function {
	public:
		~destructor_function() {
		cout << "This is a Destructor Function" << endl;
	}
	
};

//	Passing Objects as Argument to a Member Function
class employee {
	public:
		string name;
	public:
		employee(string user_supplied_name) {
		name = user_supplied_name;
	}
	void show(employee s) {
		s.name = "Something Else";
		cout << "Member Function Object Name: " << s.name << endl;
	}
};

//	Friend Function


int main() {
//	Creating Object of a Class

//	Storage of Objects in Memory
//	student s1, s2;
	
//	Calling Member Functions of a Class
//	s1.getData();
//	s1.showData();
//	
//	s2.getData();
//	s2.showData();
	
//	s1.show_data_from_outside_the_class();

//	constructor_function c1, c2("John Doe"), c3(10, 20);

//	destructor_function d;
//	cout << "Hello" << endl; 
//	cout << "World" << endl; 

	employee e1("John Doe"), e2("Smith");
	e1.show(e2);
	cout << "Original Object Name: " << e1.name;
	return 0;
}
//void student::show_data_from_outside_the_class() {
//	cout << "------ Showing Data From Outside the Class ------" << endl;
//	cout << name << "\t" << age << endl;
//}
