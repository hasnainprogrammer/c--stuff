#include <iostream>
#include <conio.h>
using namespace std;
// 1. Defining a Structure 
struct student {
	string name;
	int roll_no;
//	5. Structure Member of Array Type
	int marks[4];
};
int main() {
//	2. Structure Variables
//	student s1;

//	3. Accessing Member of the Strucuture
//	s1.name = "John Doe";
//	s1.roll_no = 1;
//	for(int i = 0; i < 4; i++) {
//		cin >> s1.marks[i];
//	}
//	cout << s1.name << endl;
//	cout << s1.roll_no;
//	for(int i = 0; i < 4; i++) {
//		cout << s1.marks[i] << endl;
//	}

//  4. Initializing Structure Variables(Assigning values to the Members of the Structure)
//	student s2 = {"Bob", 2, {88, 93, 78, 91}};
//	cout << s2.name << endl;
//	cout << s2.roll_no << endl;	
//	for(int i = 0; i < 4; i++) {
//		cout << s2.marks[i] << endl;
//	}

// 6. Structure Variables as Arrays
//struct fruit {
//	string name;
//};
//
//fruit f[2];
//for(int i = 0; i < 2; i++) {
//	cin >> f[i].name;
//}
//for(int j = 0; j <= 2; j++ ) {
//	cout << f[j].name << endl;
//}

//Initilization of Array of Structure
//fruit f2[2] = {{"Apple"}, {"Mango"}};
//cout << f2[0].name << endl;
//cout << f2[1].name;

// Nested Structure + Initialization of Nested Structures
struct student_general_data {
	int roll_no;
	string name;
};

struct student_academic_data {
//	Nested Structure 
	student_general_data s_g_d;
	float percentage;
	string grade;
};
student_academic_data s_a_d = {{1, "John"}, 89.0, "A"};
cout << "Roll No: " << s_a_d.s_g_d.roll_no << endl;
cout << "Name: " << s_a_d.s_g_d.name << endl;
cout << "Percentage: " << s_a_d.percentage << endl;
cout << "Grade: " << s_a_d.grade << endl;

// 	END
	return 0;
}
