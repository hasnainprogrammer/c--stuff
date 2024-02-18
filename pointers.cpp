#include <iostream>
#include <conio.h>
using namespace std;
//	Pointer Variables
void pointers() {
	int a = 10, b = 20, temp;
	int *x, *y;
	x = &a;
	y = &b;
	cout << "Before Swap --> a: " << a << "   b: " << b << endl;
	temp = *x;
	*x = *y;
	*y = temp;
	cout << "After Swap --> a: " << a << "   b: " << b << endl;
}
//	Pointer & Arrays (or accessing elements of an array using pointers)
void pinters_and_array() {
	int arr[5] = {10, 20, 30, 40, 50};
	int *p;
	p = arr;
	for(int i = 0; i < 5; i++) {
		cout << *p << endl;
		p += 1;
	}
}
void pinters_and_arrays_challenge() {
	int arr[5] = {10, 200, 30, 40, 50}, max, *p;
	p = arr;
	max = *p;
	for(int i = 0; i < 5; i++) {
		if (*p > max) {
			max = *p;
		}
		p += 1;
	}
	cout << "Maximum element is : " << max << endl;
}
// Passing Pointer Variables as an Argument to a Function
void temp(int *x, int *y) {
	*x = *x + 100;
	*y = *y + 100;
}

void swap(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void farenheit_to_celcius(float *t) {
	*t = (*t - 32) * 5.0 / 9.0;
}
void kg_to_grams(int *g) {
	*g = *g * 1000;
}
int main() {
//	Getting the memory address of a Variable
//	int x = 100;
//	cout << &x;

//	pointers();

//	pinters_and_array();

//	pinters_and_arrays_challenge();	

//	void temp(int *, int *);
//	int a = 25, b = 50;
//	temp(&a, &b);
//	cout << "a: " << a << "  b: " << b << endl;
//	
//	void swap(int *, int *);
//	cout << "Before Swap --> a: " << a << "   b: " << b << endl;
//	swap(&a, &b);
//	cout << "After Swap --> a: " << a << "   b: " << b << endl;
	
//	void farenheit_to_celcius(float *);
//	float temp_in_farenheit = 200;
//	farenheit_to_celcius(&temp_in_farenheit);
//	cout << temp_in_farenheit;

//	void kg_to_grams(int *);
//	int kg = 3;
//	cout << "Kilogram: " << kg << endl;
//	kg_to_grams(&kg);
//	cout << "Gram: " << kg << endl;
 
//	int *p = 0; // cannot assign any other value other than 0 to a pointer variable
//	cout << p;

	return 0;
}
