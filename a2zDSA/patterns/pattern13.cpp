#include <iostream>

using namespace std;



/*
  1      1
  12    21
  123  321
  12344321
*/
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int n,i,j,k;
	cin >> n;
  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++)
      cout<<j;
    for(k=1;k<=n-i;k++)
      cout<<" ";
    for(k=k-1;k>=1;k--)
      cout<<" ";
    for(j=j-1;j>=1;j--)
      cout<<j;
    cout<<endl;
  }
	return 0;
}