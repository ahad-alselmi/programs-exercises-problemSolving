#include<iostream>
using namespace std;
#include<map>
class solution {
	public:
	bool devisorGame(int n) {
		map<int, bool> arr;
		int Alice;
		int pop;
	cout << "Alice enter number please" << endl;
	cin >> Alice;
	for (int i = 0; i < n; i++) {
	
	
		if (Alice > 0 && Alice < n && Alice % n == 0) {
			cout << "pop your turn"<<endl;
	        cin >> pop;
	        pop = n - Alice;
			if (pop == 1)
				return false;
		}
	}
 return true;
}

};

int main() {
	int n = 10;
	solution s;
	cout<< s.devisorGame(n);

}