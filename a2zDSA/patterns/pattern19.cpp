#include <iostream>

using namespace std;



/*
  E
  D E
  C D E
  B C D E
  A B C D E
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
  // for(int i=n;i>=1;i--){
  //   ch = 'A'+i-1;
  //   for(int j=1;j<=n-i+1;j++){
  //     cout<<ch<<" ";
  //     ch++;
  //   }cout<<endl;
  // }

  for(int i=1;i<=n;i++){
    ch = 'A'+n-i;
    for(int j=1;j<=i;j++){
      cout<<ch<<" ";
      ch++;
    }cout<<endl;
  }
	return 0;
}