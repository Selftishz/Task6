#include "Header.h"

int main()
{
	srand(time(0));
	cout << "Write count of random elements: ";
	int n;
	cin >> n;

	if (!InCheck(n)) return 0;

	int* Arr = new int[n];
	FillArr(Arr, n);
	cout << "Int array: \n";
	OutArr(Arr, n);
	cout << "Sorted array: \n";
	bubbleSort(Arr, n);

	OutArr(Arr, n);

	delete[] Arr;
	double* doubleArr = new double[n];
	FillArr(doubleArr, n);
	cout << "Double array: \n";
	OutArr(doubleArr, n);
	cout << "Sorted array: \n";
	bubbleSort(doubleArr, n);
	OutArr(doubleArr, n);
	delete[] doubleArr;
}
