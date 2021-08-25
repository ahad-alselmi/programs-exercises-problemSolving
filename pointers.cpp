#include <iostream>
using namespace std;


void main()
{
	cout << main << endl;
	int x = 10;
	int* y = &x;

	cout << "Value of x is: " << x << ", value of X's address is: " << &x << endl;

	cout << "Value of y is: " << y << ", Address of y: "<<&y
		<<", Value y is pointing to: "<< *y<< endl;
}