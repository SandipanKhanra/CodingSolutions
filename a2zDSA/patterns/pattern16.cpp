#include <iostream>

using namespace std;



/*
  ABCDE
  ABCD
  ABC
  AB
  A
*/
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int n;
  char ch;
	cin >> n;
  for(int i=n;i>=1;i--){
    ch='A';
    for(int j=1;j<=i;j++){
      cout<<ch;
      ch++;
    }cout<<endl;
  }
	return 0;
}