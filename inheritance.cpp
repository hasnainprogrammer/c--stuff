#include <iostream>
#include <conio.h>
using namespace std;

//	Inheritance
//class student {
//	private:
//		string name;
//	public:
//		void set_name() {
//		name = "John";
//	}
//};
//class marks : public student {
//	private:
//		int s1, s2, total;
//	public:
//		void result() {
//		s1 = 77;
//		s2 = 83;
//		total = s1 + s2;
//		cout << total << endl;
//	}
//};
////	Public, Private, Protected Inheritance
//class fruit {
//	private:
//		string name;
//	protected:
//		string color;
//	public:
//		string taste;
//};
//class apple : public fruit {
//	public:
//		void show() {
////			name = "Apple";
//			color = "Red";
//			taste = "Sweet";
//			cout << "Public: " << taste << endl;
//			cout << "Protected: " << color << endl;
////			cout << "Private: " << name;
//		}
//};
//
//class mango : private fruit {
//	public:
//		void show() {
////			name = "Mango";
//			color = "Yellow";
//			taste = "Sweet";
//			cout << "Public: " << taste << endl;
//			cout << "Protected: " << color << endl;
////			cout << "Private: " << name;
//		}
//};
//
//class apricot : protected fruit {
//	public:
//		void show() {
////			name = "Apple";
//			color = "Red";
//			taste = "Sweet";
//			cout << "Public: " << taste << endl;
//			cout << "Protected: " << color << endl;
////			cout << "Private: " << name;
//		}
//};
//
////	Derived Class Constructors
//class B{
//	public:
//		B() {
//			cout << "Base Class Constructor" << endl;
//		}
//};
//class D : public B {
//	public:
//		D() {
//			cout << "Derived Class Constructor" << endl;
//		}
//};
//
//	Constructor in Single Inheritance with Arguments
//class car {
//	private:
//		string name;
//	public:
//		car(string supplied_name) {
//			name = supplied_name;
//			cout << name << endl;
//		}
//};
//class toyota : public car {
//	public:
//		toyota(string name, int model) : car(name) {
//			cout << model << endl;
//		}
//};

//	Multiple Inheritance
//class stdt {
//	private:
//		string name;
//	public:
//		void set_name() {
//		name = "John";
//		cout << "Name: " << name;
//	}
//};
//class mrk {
//	private:
//		int s1, s2, total;
//	public:
//		void set_data() {
//			s1 = 88;
//			s2 = 70;
//			total = s1 + s2;
//			cout << "s1 Marks: " << s1;
//			cout << "s2 Marks: " << s2;
//			cout << "Total: " << s1 + s2;
//		}
//};
//class show : public stdt, public mrk {
//	public:
//		void display() {
//			cout << "-------- Showing Record --------" << endl;	
//		}
//};

//	Constructor in Multiple Inheritance with Arguments
//	!--> same as the above only the constructors of the base classes are separated with commas

// Friend Function
//class Bike {
//	bool can_access_bike = false;
//	friend void my_friend(Bike &b);
//	public:
//	void show() {
//		cout << can_access_bike << endl;
//	}
//};
//
//void my_friend(Bike &b) {
//	b.can_access_bike = true;
//	if (b.can_access_bike) {
//	cout << "Can access the Bike :)" << endl;		
//	}
//	b.show();
//}

int main() {

//	marks m;
//	m.set_name();
//	m.result();

//	apple a;
//	a.show();
//	mango m;
//	m.show();
//	apricot ap;
//	ap.show();

//	D d;
//	toyota t("Toyota", 2024);
//	show s;
//	s.display();
//	s.set_name();
//	s.set_data();
	
//	Bike b1;
//	b1.show();
//	my_friend(b1);
	
	return 0;
}
