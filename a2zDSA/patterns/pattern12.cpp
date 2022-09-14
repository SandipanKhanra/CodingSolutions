#include <iostream>

using namespace std;



/*
  1
  0 1
  1 0 1
  0 1 0 1
  1 0 1 0 1 
          * 
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
      if((i+j)%2==0)
        cout<<"1 ";
      else
        cout<<"0 ";
    }
    cout<<endl;
  }
	return 0;
}