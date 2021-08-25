#include<iostream>
#include<fstream>
using namespace std;

void main() {
	ofstream f;
	f.open("C:\\Users\\sun com\\Videos\\Captures\\first.txt",ios::app);
	int x = 10;
	f << x<<endl;
	f << "hello"<<endl;
    f.close();
	ifstream s;
	s.open("C:\\Users\\sun com\\Videos\\Captures\\first.txt");
	int y;
	s >> y;
	cout << y<<endl;
}

