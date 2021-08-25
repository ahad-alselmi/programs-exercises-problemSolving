// polymorphism.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"shape.h"


int main()
{
	shape* ptr;
	rectangle rec(10, 7, "Red");
	circle c(7, "yellow");
	ptr = &rec;
	ptr->area();
	ptr->draw();
	ptr = &c;
	ptr->area();
	ptr->draw();
}

