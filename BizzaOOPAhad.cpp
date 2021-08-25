#include"pizza.h"
void main() {

	pizza* pizza = nullptr;
	 
	cout << "Enter your choice";
	int choice;
	cin >> choice;
	if (choice == 1) {
		pizza = new chickenpizza;
		pizza->makingPizza();
	
	}
	if (pizza) {
		pizza->makingPizza();
		delete pizza;}

}