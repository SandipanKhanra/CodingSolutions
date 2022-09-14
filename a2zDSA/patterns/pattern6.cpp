#include <iostream>

using namespace std;



/*
  1 2 3 4 5
  1 2 3 4
  1 2 3
  1 2
  1
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
  for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
      cout<<j<<" ";
    }cout<<endl;
  }
	return 0;
}