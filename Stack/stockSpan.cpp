#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <stack>
#include <queue>
#include <map>

using namespace std;

void printV(vector<int>&v) {
	for (auto i : v) {
		cout << i << " ";
	} cout << endl;
}

// TC = O(n^2)
// SC = O(1)
vector<int> bruteForce(vector<int>& arr, int n) {
	vector<int> v;
	int count;
	bool foundNGL = false;
	for (int i = 0; i < n; i++) {
		foundNGL = false;
		count = 1;
		for (int j = i - 1; j >= 0; j--) {
			if (arr[j] > arr[i]) {
				v.push_back(count);
				foundNGL = true;
				break;
			} else {
				count++;
			}
		}
		// This is the case when there is no NGL
		if (!foundNGL)
			v.push_back(i + 1);
	}
	return v;
}

// Calculate the Nearest Greater Element to left
// Stock span = i - index(NGL)
// TC = O(n)
vector<int> stockSpan(vector<int>& price, int n) {
	vector<int> v;
	stack<int> s;
	for (int i = 0; i < n; i++) {
		if (s.empty()) {
			v.push_back(i + 1);
		} else {
			while ((!s.empty()) && (price[s.top()] <= price[i]))
				s.pop();
			if (s.empty())
				v.push_back(i + 1);
			else
				v.push_back(i - s.top());
		}
		s.push(i);
	}
	return v;
}

// In stack store both the element and its index
vector<int> approach2(vector<int>& price, int n) {
	stack<pair<int, int>> s;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		if (s.empty())
			v.push_back(i + 1);
		else {
			while ((!s.empty()) && (s.top().first) <= price[i])
				s.pop();
			if (s.empty())
				v.push_back(i + 1);
			else
				v.push_back(i - s.top().second);
		}
		s.push({price[i], i});
	}
	return v;
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	vector<int> price(n);
	for (auto &i : price)
		cin >> i;
	// vector<int> res = bruteForce(price, n);
	// vector<int> res = stockSpan(price, n);
	vector<int> r = approach2(price, n);
	printV(r);
	return 0;
}
