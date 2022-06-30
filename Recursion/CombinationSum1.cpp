#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <map>

using namespace std;

void combination(int ind, int target, vector<vector<int>>& ans, vector<int>&ds, vector<int>& arr) {
	//Base case when ind is equal to arr.size() and target value is 0
	// then we have a valid combination and add that to our ans
	if (ind == (int)arr.size()) {
		if (target == 0) {
			ans.push_back(ds);
		}
		return;
	}

	// If the element at current index is not greater than target then only consider that otherwise skip it
	if (arr[ind] <= target) {
		ds.push_back(arr[ind]);
		combination(ind, target - arr[ind], ans, ds, arr);
		ds.pop_back();
	}
	//This is the case where we are not picking the current element
	combination(ind + 1, target, ans, ds, arr);
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	vector<int> arr = {2, 3, 1};
	// int n = arr.size();
	int sum = 4;
	vector<int> v;
	vector<vector<int>> ans;
	combination(0, sum, ans, v, arr);
	for (auto V : ans) {
		for (auto i : V) {
			cout << i << " ";
		} cout << endl;
	}

	return 0;
}
