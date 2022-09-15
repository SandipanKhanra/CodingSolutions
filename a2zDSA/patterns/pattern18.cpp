#include <iostream>

using namespace std;



/*
       A
      ABA
     ABCBA
    ABCDCBA
   ABCDEDCBA 
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
    for(int j=1;j<=n-i;j++)
      cout<<" ";
    ch='A';
    for(int j=1;j<=i;j++){
      cout<<ch;
      ch++;
    }
    ch-=2;
    for(int j=i-1;j>=1;j--){
      cout<<ch;
      ch--;
    }
    cout<<endl;

  }
	return 0;
}