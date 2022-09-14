#include <iostream>

using namespace std;



/*
  1
  2 2
  3 3 3
  4 4 4 4
  5 5 5 5 5
*/
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int n;
	cin >> n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<i<<" ";
    }cout<<endl;
  }
	return 0;
}