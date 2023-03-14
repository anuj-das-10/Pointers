#include<iostream>
using namespace std;

int main() {

// (Address of) Operator ----->  &
	int x = 10;
	int* addr_of_x = &x;			// It holds the address of x

	cout << "The Address of x is " << &x << endl;
	cout << "The Address of x is " << addr_of_x << endl;


// Dereferencing Operator ----->  *
	cout << "The value of x is " << *(&x) << endl;
	cout << "The value of x is " << *addr_of_x << endl;




// POINTER TO POINTER
	int y = 20;
	int* addr_of_y = &y;
	int** addr_of_ptr = &addr_of_y;

	cout << "The Address of y is " << &y << endl;
	cout << "The Address of y is " << addr_of_y << endl;

	cout << "The Address of pointer addr_of_y is " << &addr_of_y << endl;
	cout << "The Address of pointer addr_of_y is " << addr_of_ptr << endl;

	cout << "The value of y is " << *addr_of_y << endl;
	cout << "The value of y is " << *(*addr_of_ptr) << endl;


	return 0;
}