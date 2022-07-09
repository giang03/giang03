#include <bits/stdc++.h>
using namespace std;
int main(){
	unsigned int c1,c2,c3,c4,c5;
	cin >> c1 >> c2 >> c3 >> c4 >> c5;
	int p = c1 + c2 + c3 + c4 + c5;
	if(p%5 != 0 || p == 0){
		cout << -1 << endl;
	}
	else cout << p/5 << endl;
    return 0;
}
