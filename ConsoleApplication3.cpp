#include <iostream>
using namespace std;
int main()
{
	srand(time(NULL));
	int a, b;
	const int size = 100;
	a = 10;
	b = 99;
	int array[size];
	int array2[size];
	int array3[size];

	for (int i = 0; i < 10; i++) {
		array[i] = a + rand() % (b + 1 - a);
		cout << array[i] << " ";

	}

	int n = 10;
	for (int i = 0,flag; i < n; i++){
		flag = true;
		for (int j = 0; j < n-i-1; j++){
			if (array[j] > array[j-1]);
			swap(array[j], array[j + 1]);
			swap(array[j], array[j - 1]);
			flag = false;
		}
		if (flag) break;
		
	}
	int n = 10;
	for (int i = 0, flag; i < n; i++) {
		flag = true;
		for (int j = 0; j < n - i - 1; j++) {
			if (array[j] > array[j - 1]);
			swap(array[j], array[j + 1]);
			swap(array[j], array[j - 1]);
			flag = false;
		}
		if (flag) break;

	cout << endl;
	for (int k = 0; k < 10; k++) {
		cout << array[k] << " ";
	
	}
}

