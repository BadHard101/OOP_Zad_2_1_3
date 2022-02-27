#include "RevArr.h"
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

RevArr::RevArr(int n) {
	this->n_arr = n;
	scanElms();
	cout << "N = " << n_arr << endl;
}

int RevArr::scanElms() {
	int p;
	for (int i = 0; i < n_arr; i++)
	{
		cin >> p;
		arr.push_back(p);
	}
	return 0;
}

void RevArr::getElms() {
	for (int i = 0; i < n_arr; i++)
		cout << setw(5) << arr[i];
}

int RevArr::revElms() {
	reverse(arr.begin(), arr.end());
	return 0;
}