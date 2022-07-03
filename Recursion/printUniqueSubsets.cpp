#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// Print unique subsets in lexicographical order

void print(int ind, vector<vector<int>>& ans, vector<int>&ds, vector<int>& arr) {
	// Base case
	if (ind == (int)arr.size()) {
		ans.push_back(ds);
		return;
	}
	// Consider only once if the element is selected
	for (int i = ind; i < (int)arr.size(); i++) {
		if (i > ind && arr[i] == arr[i - 1])
			continue;
		ds.push_back(arr[i]);
		print(i + 1, ans, ds, arr);
		ds.pop_back();
	}
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	vector<int> arr = {1, 4, 2, 2, 3, 4};
	sort(arr.begin(), arr.end());
	vector<vector<int>> ans;
	vector<int> ds;
	print(0, ans, ds, arr);
	for (auto i : ans) {
		for (auto j : i) {
			cout << j << " ";
		} cout << endl;
	}

	return 0;
}
