/*#include<algorithm>
#include <iostream>
#include<string>
using namespace std;

void odd_even(int arr[], int size) {
	int odd[1000], even[1000];
	int k = 0, m = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0)
			even[k++] = arr[i];
		else
			odd[m++] = arr[i];
	}
	sort(odd, odd + m, greater<int>());
	sort(even,even+k);
	for (int i = 0; i < m; i++)
		arr[i] = odd[i];

	for (int i = 0; i < k; i++)
		arr[m++] = even[i];
	
}

int main()
{
	int arr[] = { 0, 4, 5, 3, 7, 2, 1 };
	int size=0;
	 odd_even(arr, 7);
	 for (int i = 0; i <size; i++)
		 cout << arr[i]<<" ";
}*/


		

	
		




	







