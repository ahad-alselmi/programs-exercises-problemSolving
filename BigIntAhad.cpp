#include <iostream>
#include<string>
using namespace std;

string addToBigInt(string number, int toAdd) {
int remainder = 0;
		string result = "";
	for (int i = number.size() - 1; i >= 0; i--) {
		
		char num = number[i];
		int n = num - '0';
		int second = toAdd % 10;
		toAdd /= 10;
		n += second+remainder;
		remainder = 0;
		if (n >= 10) {
			remainder = 1;
			n -= 10;
		}
		result.insert(result.begin(), (char)n + '0');

	}
	
	if (remainder) {
		result.insert(result.begin(), (char)remainder + '0');
	}
	return result;

}

int main() {
	string number;
	cout << "Please enter your big int number: " ;
	cin >> number;
 	cout << addToBigInt(number,11);

} 



