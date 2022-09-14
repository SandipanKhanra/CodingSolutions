#include <iostream>

using namespace std;



/*
  5 4 3 2 1
    4 3 2 1
      3 2 1
        2 1
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
    // print the leading spaces
    for(int j=1;j<=n-i;j++){
      cout<<"  ";
    }
    for(int j=i;j>=1;j--){
      cout<<j<<" ";
    }cout<<endl;
  }
	return 0;
}