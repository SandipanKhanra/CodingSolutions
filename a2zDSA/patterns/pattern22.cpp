#include <iostream>

using namespace std;



/*
 n = 4
  ****
  *  *
  *  *
  *  *
  ****
*/

void printv2(int n){
  int i,j;
  for(i=1;i<=n;i++)
    cout<<"*";
  cout<<endl;

  for(i=1;i<=n-1;i++){
    cout<<"*";
    for(j=1;j<=n-2;j++)
      cout<<" ";
    cout<<"*\n";
  }
  
  for(i=1;i<=n;i++)
    cout<<"*";
  cout<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int n,i,j;
	cin >> n;
  

  printv2(n);
	return 0;
}