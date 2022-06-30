#include <iostream>
#include <vector>

using namespace std;

bool printS(int ind, vector<int>&ds, int sum, int s, int arr[], int n) {
	// Base condition
	if (ind == n) {
		if (sum == s) {
			for (auto i : ds) {
				cout << i << " ";
			} cout << endl;
			return true;
		}
		return false;
	}

	// Take the current element into consideration
	ds.push_back(arr[ind]);
	s += arr[ind];
	if (printS(ind + 1, ds, sum, s, arr, n) == true)
		return true;

	//Remove the previously added element
	ds.pop_back();
	s -= arr[ind];

	//This is the case when we are not picking the current element
	if (printS(ind + 1, ds, sum, s, arr, n) == true)
		return true;

	return false;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {1, 2, 1};
	int sum = 2;
	int s = 0;
	int n = sizeof(arr) / sizeof(arr[0]);
	vector<int> ds;
	printS(0, ds, sum, s, arr, n);

	return 0;
}
