#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <stack>
#include <queue>
#include <map>

using namespace std;

// Print a vector
void printV(vector<int>&v) {
	for (auto i : v) {
		cout << i << " ";
	} cout << endl;
}

// Calculate the Nearest Smaller to Left indices
// TC = O(n)
vector<int> nslIndex(vector<int>& heights, int n) {
	vector<int> v;
	stack<int> s;
	int pseudoIndex = -1;
	for (int i = 0; i < n; i++) {
		if (s.empty())
			v.push_back(pseudoIndex);
		else {
			while (!s.empty() && heights[s.top()] >= heights[i]) {
				s.pop();
			}
			if (s.empty())
				v.push_back(pseudoIndex);
			else
				v.push_back(s.top());
		}
		s.push(i);
	}
	return v;
}

// Calculate the Nearest Smaller to Right indices
// TC = O(n)
vector<int> nsrIndex(vector<int>& heights, int n) {
	vector<int> v;
	stack<int> s;
	int pseudoIndex = n;
	for (int i = n - 1; i >= 0; i--) {
		if (s.empty())
			v.push_back(pseudoIndex);
		else {
			while (!s.empty() && heights[s.top()] >= heights[i]) {
				s.pop();
			}
			if (s.empty())
				v.push_back(pseudoIndex);
			else
				v.push_back(s.top());
		}
		s.push(i);
	}
	reverse(v.begin(), v.end());
	return v;
}

// TC = O(n)
int mah(vector<int>& heights, int n) {
	vector<int> left, right, width(n);

	left = nslIndex(heights, n);
	right = nsrIndex(heights, n);

	// Calculate the width of retangle
	for (int i = 0; i < n; i++) {
		width[i] = (right[i] - left[i] - 1);
	}

	// Find out the maximum area
	int maxArea = 0, curArea;
	for (int i = 0; i < n; i++) {
		curArea = heights[i] * width[i];
		if (curArea > maxArea)
			maxArea = curArea;
	}

	return maxArea;
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
	vector<int> heights(n);
	for (auto &i : heights)
		cin >> i;

	int res = mah(heights, n);
	cout << res << endl;

	return 0;
}
