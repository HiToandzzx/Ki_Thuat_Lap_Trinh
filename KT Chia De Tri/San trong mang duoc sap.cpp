//Cho 1 day da sx va X. Tim ptu lon nhat cua day va <= X
#include <iostream>
using namespace std;

int floorSearch(int a[], int n, int x)
{
	//Neu ptu cuoi <= X
	if (x >= a[n - 1])
		return n-1;

	//Neu ptu dau tien > X
	if (x < a[0])
		return -1;

	// Linearly search for the first element
	// greater than x
	for (int i=1 ; i<n ; i++)
		if (a[i] > x)
			return (i - 1);
	return -1;
}

int main()
{
	int a[] = { 1, 2, 4, 6, 10, 12, 14 };
	int n = sizeof(a) / sizeof(a[0]);
	int x = 11;
	int index = floorSearch(a, n-1, x);
	if (index == -1)
		cout << "Floor of " << x << " doesn't exist in array ";
	else
		cout << "Floor of " << x << " is " << a[index];
	return 0;
}

