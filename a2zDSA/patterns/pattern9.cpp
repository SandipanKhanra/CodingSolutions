#include <iostream>

using namespace std;



/*
  * * * * * * * * *
    * * * * * * *
      * * * * * 
        * * * 
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
  for(int i=n;i>=1;i--){
    for(int j=1;j<=n-i;j++){
      cout<<"  ";
    }
    for(int j=1;j<=2*i-1;j++){
      cout<<"* ";
    }cout<<endl;
  }
	return 0;
}