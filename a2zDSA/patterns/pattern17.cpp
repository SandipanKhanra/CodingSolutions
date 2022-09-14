#include <iostream>

using namespace std;



/*
  A
  BB
  CCC
  DDDD
  EEEEE
*/
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int n;
  char ch='A';
	cin >> n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<ch;
    }cout<<endl;
    ch++;
  }
	return 0;
}