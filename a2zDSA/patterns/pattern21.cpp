#include <iostream>

using namespace std;



/*
  *        *
  **      **
  ***    ***
  ****  ****
  **********
  ****  ****
  ***    ***
  **      **
  *        *
*/

void printv2(int n){
  int i,j;
  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++)
      cout<<"*";
    j--;
    for(int k=1;k<=n-j;k++)
      cout<<"  ";
    for(;j>=1;j--)
      cout<<"*";
    cout<<endl;
  }

  for(i=n-1;i>=1;i--){
    for(j=1;j<=i;j++){
      cout<<"*";
    }
    for(j=1;j<=n-i;j++){
      cout<<"  ";
    }
    for(j=1;j<=i;j++)
      cout<<"*";
    cout<<endl;
  }
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