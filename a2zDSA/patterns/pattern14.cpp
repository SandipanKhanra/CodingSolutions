#include <iostream>

using namespace std;



/*
  1
  2 3
  4 5 6
  7 8 9 10
  11 12 13 14 15 
*/
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int n,k=1,i,j;
	cin >> n;
  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      cout<<k<<" ";
      k++;
    }
    cout<<endl;
  }
	return 0;
}